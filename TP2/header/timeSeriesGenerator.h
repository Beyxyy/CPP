#ifndef TIMESERIESGENERATOR_H
#define TIMESERIESGENERATOR_H
#include <vector>
using namespace std;
class TimeSeriesGenerator{
public :
    int seed;
    TimeSeriesGenerator() = default;
    TimeSeriesGenerator(int seed);
    virtual vector<double> generateTimesSeries(int) = 0;
    static void printTimesSeries(const vector<double> serie);
};

#endif
