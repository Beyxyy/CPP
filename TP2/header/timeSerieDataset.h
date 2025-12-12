#ifndef TIMESERIEDATASET_H
#define TIMESERIEDATASET_H
#include "timeSeriesGenerator.h"
#include <vector>

class TimeSerieDataset{
    private : 
        bool znormalize;
        bool isTrain;
        vector<double> data;
        vector<int> labels;
        int maxLength;
        int numberOfSamples;
};

#endif