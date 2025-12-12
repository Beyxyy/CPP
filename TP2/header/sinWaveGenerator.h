#ifndef GAUSSIANGENERATOR_H
#define GAUSSIANGENERATOR_H
#include <vector>
#include "timeSeriesGenerator.h"

class SinWaveGenerator : public TimeSeriesGenerator{
public :
    SinWaveGenerator(double amplitude, double _frequence, double _init, int _seed);
    vector<double> generateTimesSeries(int) override;
private :
    double init;
    double frequence;
    double amplitude;
};

#endif
