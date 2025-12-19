#ifndef STEPGENERATOR_H
#define STEPGENERATOR_H
#include <vector>
#include "timeSeriesGenerator.h"

class StepGenerator : public TimeSeriesGenerator{
public :
    StepGenerator(int _seed);
    StepGenerator() = default;

    vector<double> generateTimesSeries(int) override;

};

#endif
