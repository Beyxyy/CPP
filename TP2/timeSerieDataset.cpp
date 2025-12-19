#include "header/timeSerieDataset.h"
#include <math.h>
TimeSerieDataset::TimeSerieDataset(bool _znormalise, bool _isTrain) : 
znormalize(_znormalise), isTrain(_isTrain), numberOfSamples(0){}

        
void TimeSerieDataset::addTimeSerie(vector<double> _data, int label){
    if(this->znormalize) _data=this->zNormalisation(_data);
    this->data.push_back(_data);
    this->labels.push_back(label);
    this->numberOfSamples++;
}
void TimeSerieDataset::addTimeSerie(vector<double> _data){
    if(this->znormalize) _data=this->zNormalisation(_data);
    this->data.push_back(_data);
    this->numberOfSamples++;
}

vector<double> TimeSerieDataset::zNormalisation(vector<double> data){
    //trouvée sur google (stackoverflow)
    double mean = 0;
    for (double val : data) {
        mean += val;
    }
    mean /= data.size();
    double et = 0;
    for (double val : data) {
        et += (val - mean) * (val - mean);
    }
    et = sqrt(et / data.size());
    for (double& val : data) {
        val = (val - mean) / et;
    }
    return data;
}

double TimeSerieDataset::eclidianDistance(const vector<double>& s1, const vector<double>& s2){
    double distance = 0.0;
    if(s1.size() != s2.size())
        return -1;
    
    for(int i=0; i<s1.size(); i++)
        distance += (s1[i]-s2[i])*(s1[i]-s2[i]);

    return sqrt(distance);
}

double TimeSerieDataset::DTW(const vector<double>& s1, const vector<double>& s2){
    int n = s1.size();
    int m = s2.size();
    vector<vector<double>> matrix(n + 1, vector<double>(m + 1, INFINITY));
    matrix[0][0] = 0.0;
    double d;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            d=(s1[i-1]-s2[j-1])*(s1[i-1]-s2[j-1]);
            matrix[i][j] = d + min(matrix[i-1][j], min(matrix[i][j-1], matrix[i-1][j-1]));
        }
    }
    return sqrt(matrix[n][m]);
}

