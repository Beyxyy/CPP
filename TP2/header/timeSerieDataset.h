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
        vector<double> zNormalisation(vector<double> data);

    public :
        TimeSerieDataset(bool _znormalise, bool _isTrain);
        void addTimeSerie(vector<double> data, int label);
        void addTimeSerie(vector<double> data);
        double eclidianDistance(const vector<double>& s1, const vector<double>& s2);
        double DTW(const vector<double>& s1, const vector<double>& s2);
        vector<vector<double>> getData() const { return data; }
        vector<int> getLabels() const { return labels; }
        int getNumberOfSamples() const { return numberOfSamples; }

};

#endif