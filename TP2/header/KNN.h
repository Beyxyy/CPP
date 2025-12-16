#ifndef KNN_H
#define KNN_H
#include <string>

class KNN {
public :
    KNN(const int k);
    void setK(const int _k);
    void getK();
    float KNN::evalutate();

private :
    int k;
    std::string similarity_measure;

};

#endif
