#ifndef STEPGENERATOR_H
#define STEPGENERATOR_H
#include <vector>
#include "timeSeriesGenerator.h"

class StepGenerator : public TimeSeriesGenerator{
public :
    StepGenerator(int _seed);
    vector<double> generateTimesSeries(int) override;

    private : 
        double getVal();

};

#endif
