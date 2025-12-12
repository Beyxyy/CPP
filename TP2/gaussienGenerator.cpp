#include "header/gaussianGenerator.h"
#include <vector>
GaussianGenerator::GaussianGenerator(int _seed, double _moyenne, double _et) : moyenne(_moyenne), et(_et), TimeSeriesGenerator(_seed){}

double GaussianGenerator::boxMuller() {
    return 0.0;
};

vector<double> GaussianGenerator::generateTimesSeries(int taille){
    vector<double> result;
    for (int i=0;i<taille; i++){
        result.push_back(this->boxMuller());
    }
    return result;
};
