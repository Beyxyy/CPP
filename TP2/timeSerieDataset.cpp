#include "header/timeSerieDataset.h"
#include <math.h>
TimeSerieDataset::TimeSerieDataset(bool _znormalise, bool _isTrain) : 
znormalize(_znormalise), isTrain(_isTrain), numberOfSamples(0){}

        
void TimeSerieDataset::addTimeSerie(vector<double> _data, int label){
    if(_znormalise) _data=this->zNormalisation(_data);
    this->data.push_back(_data);
    this->labels.push_back(label);
    this->numberOfSamples++;
}
void TimeSerieDataset::addTimeSerie(vector<double> _data){
    if(_znormalise) _data=this->zNormalisation(_data);
    this->data.push_back(_data);
    this->numberOfSamples++;
}

void TimeSerieDataset::zNormalisation(vector<double> data){
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

double TimeSerieDataset::eclidianDistance(const vector<double>& s1, const vector<double>& s1){
    double distance = 0.0;
    if(s1.size() != s2.size())
        return -1;
    
    for(int i=0; i<s1.size(); i++)
        distance +=sqrt((s1[i]-s2[i])*(s1[i]-s2[i]));

    return distance;
}

double TimeSerieDataset::DTW(const vector<double>& s1, const vector<double>& s2){
    // if(s1.size() != s2.size())
    //     return -1;
    int n = s1.size();
    int m = s2.size();
    vector<vector<double>> matrix(n + 1, vector<double>(m + 1, INFINITY));
    matrix[0][0] = 0.0;
    double d;
    for(int i=0; i<matrix.size(); i++){
        for(double column : row){
            d=(s1[i]-s2[j])*(s1[i]-s2[j]);
            matrix[i][j] = d+min(matrix[i-1][j], matrix[i][j-1], matrix[i-1][j-1]);
        }
    }
    return sqrt(matrix[n][m]);
}

