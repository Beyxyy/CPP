#include "header/gaussianGenerator.h"
#include "header/sinWaveGenerator.h"
#include "header/StepGenerator.h"
#include "header/timeSerieDataset.h"
#include "header/KNN.h"
#include <iostream>
using namespace std;

int main(void){
    TimeSerieDataset trainData(false, true), testData(false, false);

    GaussianGenerator gsg;
    SinWaveGenerator swg;
    StepGenerator stg;

    vector<double> gaussian1 = gsg.generateTimesSeries(11);
    trainData.addTimeSerie(gaussian1, 0);
    vector<double> gaussian2 = gsg.generateTimesSeries(11);
    trainData.addTimeSerie(gaussian2, 0);

     vector<double> sin1 = swg.generateTimesSeries(11);
    trainData.addTimeSerie(sin1, 1);
    vector<double> sin2 = swg.generateTimesSeries(11);
    trainData.addTimeSerie(sin2, 1);

     vector<double> step1 = stg.generateTimesSeries(11);
    trainData.addTimeSerie(step1, 2);
    vector<double> step2 = stg.generateTimesSeries(11);
    trainData.addTimeSerie(step2, 2);

    vector<int> ground_thruth;
    testData.addTimeSerie(gsg.generateTimesSeries(11));
    ground_thruth.push_back(0);

    testData.addTimeSerie(swg.generateTimesSeries(11));
    ground_thruth.push_back(1);

    testData.addTimeSerie(stg.generateTimesSeries(11));
    ground_thruth.push_back(2);

    KNN knn_1(1, "dtw");

    cout<<knn_1.evalutate(trainData, testData, ground_thruth) <<endl;

    KNN knn_2 (2, "euclidian_distance");
    cout<<knn_2.evalutate(trainData, testData, ground_thruth) <<endl;


     KNN knn_3 (3, "euclidian_distance");
    cout<<knn_3.evalutate(trainData, testData, ground_thruth) <<endl;

    return 0;

}