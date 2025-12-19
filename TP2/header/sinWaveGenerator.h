#ifndef SINWAVEGENERATOR_H
#define SINWAVEGENERATOR_H
#include <vector>
#include "timeSeriesGenerator.h"

class SinWaveGenerator : public TimeSeriesGenerator{
public :
    SinWaveGenerator(double amplitude, double _frequence, double _init, int _seed);
    SinWaveGenerator() = default;
    vector<double> generateTimesSeries(int) override;

private :
    double init;
    double frequence;
    double amplitude;
};

#endif
