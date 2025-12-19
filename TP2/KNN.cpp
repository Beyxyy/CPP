#include "header/KNN.h"
#include <vector>
#include <algorithm>

KNN::KNN(int _k, const std::string _sm) : k(_k), similarity_measure(_sm){}

int KNN::getK() const {
    return this->k;
}

float KNN::evalutate(TimeSerieDataset& trainData, TimeSerieDataset& testData, const std::vector<int>& ground_truth){
    std::vector<std::vector<double>> trainVectors = trainData.getData();
    std::vector<int> trainLabels = trainData.getLabels();
    std::vector<std::vector<double>> testVectors = testData.getData();
    
    int correct = 0;
    
    for(int i = 0; i < testVectors.size(); i++){
        std::vector<std::pair<double, int>> distances;
        
        for(int j = 0; j < trainVectors.size(); j++){
            double dist;
            if(this->similarity_measure == "dtw"){
                dist = trainData.DTW(testVectors[i], trainVectors[j]);
            }
            else if(this->similarity_measure == "euclidian_distance"){
                dist = trainData.eclidianDistance(testVectors[i], trainVectors[j]);
            }
            else{
                return -1;
            }
            distances.push_back({dist, trainLabels[j]});
        }
        
        std::sort(distances.begin(), distances.end());
        
        std::vector<int> labelCount(3, 0);
        for(int j = 0; j < this->k; j++){
            labelCount[distances[j].second]++;
        }
        
        int predictedLabel = 0;
        int maxCount = labelCount[0];
        for(int j = 1; j < labelCount.size(); j++){
            if(labelCount[j] > maxCount){
                maxCount = labelCount[j];
                predictedLabel = j;
            }
        }
        
        if(predictedLabel == ground_truth[i]){
            correct++;
        }
    }
    
    return (float)correct / testVectors.size();
}

void KNN::setK(const int _k){
    this->k = _k;
}

