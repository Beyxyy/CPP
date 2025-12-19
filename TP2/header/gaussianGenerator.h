#ifndef GAUSSIANGENERATOR_H
#define GAUSSIANGENERATOR_H
#include <vector>
#include "timeSeriesGenerator.h"

class GaussianGenerator : public TimeSeriesGenerator{
public :
    GaussianGenerator(int, double, double);
    GaussianGenerator()=default;
    vector<double> generateTimesSeries(int) override;
private :
    double moyenne;
    double et;
};

#endif
