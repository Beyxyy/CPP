#include "BinaryAlgorithm.h"
#include <vector>
#include <iostream>
#include <cmath>

int BinaryAlgorithm::search(const vector<int>& vector, int target){
    int left = 0;
    int right = vector.size() - 1;
    numberComparaisons = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        numberComparaisons++;
        if (vector[mid] == target)
            return mid;
        else if (vector[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
    
}