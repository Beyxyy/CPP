#ifndef TIMESERIEDATASET_H
#define TIMESERIEDATASET_H
#include "timeSeriesGenerator.h"
#include <vector>

class TimeSerieDataset{
    private : 
        bool znormalize;
        bool isTrain;
        vector<vector<double>> data;
        vector<int> labels;
        int maxLength;
        int numberOfSamples;
        void zNormalisation();
        void addTimeSerie(vector<double> data, int label);
        void addTimeSerie(vector<double> data);

    public :
        TimeSerieDataset(bool _znormalise, bool _isTrain,const vector<double>& _data, const vector<int>& _labels,int maxLength, int numberOfSamples);
        double eclidianDistance(const vector<double>& s1, const vector<double>& s2);
        double DTW(const vector<double>& s1, const vector<double>& s2);

};

#endif