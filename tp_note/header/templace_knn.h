#include <vector>
using namespace std;

template <typename T>
class KNN
{
    protected :
        int k;
    public :
        KNN();
        KNN(int _k);
        int getK() const;

        vector<int> findNearestNeighbours(vector<T>& trainData, T& target);
        
        virtual double similarityMeasure(T& a , T& b) = 0;
};