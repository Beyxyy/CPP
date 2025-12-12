#include "header/timeSeriesGenerator.h"
#include <iostream>
#include <vector>
using namespace std;
TimeSeriesGenerator::TimeSeriesGenerator(int _seed): seed(_seed){};
void TimeSeriesGenerator::printTimesSeries(const vector<double> serie){
    for (double e  : serie) {
        std::cout<<e<<std::endl;
    }
};
