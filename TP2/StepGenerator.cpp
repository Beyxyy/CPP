#include "header/StepGenerator.h"
#include <vector>
#include "header/StepGenerator.h"

StepGenerator::StepGenerator(int _seed) : TimeSeriesGenerator(_seed){}

double StepGenerator::getVal() {
    return 0.0;
};

vector<double> StepGenerator::generateTimesSeries(int taille){
    vector<double> result;
    for (int i=0;i<taille; i++){
        result.push_back(this->getVal());
    }
    return result;
};


