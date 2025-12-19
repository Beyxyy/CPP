#ifndef KNN_H
#define KNN_H
#include <string>
#include "timeSerieDataset.h"

class KNN {
public :
    KNN(const int k, const std::string _sm);
    void setK(const int _k);
    int getK() const;
    float evalutate(TimeSerieDataset& trainData, TimeSerieDataset& testData, const std::vector<int>& ground_truth);

private :
    int k;
    std::string similarity_measure;

};

#endif
