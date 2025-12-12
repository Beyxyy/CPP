#include "header/sinWaveGenerator.h"
#include <vector>
#include <math.h>
SinWaveGenerator::SinWaveGenerator(double _amplitude, double _frequence, double _init, int _seed) : amplitude(_amplitude), frequence(_frequence), init(_init), TimeSeriesGenerator(_seed){}

vector<double> SinWaveGenerator::generateTimesSeries(int taille){
    vector<double> result;
    for (int i=0;i<taille; i++){
        result.push_back(this->amplitude * sin(this->frequence * i + this->init));
    }
    return result;
};
