#include "LinearAlgorithm.h"
#include "JumpAlgorithm.h"
#include "BinaryAlgorithm.h"
#include "SearchingAlgorithm.h"
#include <iostream>
#include <vector>


int main(){
    std::vector<int> data = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39};
    int target = 19;
    LinearAlgorithm linearSearch;
    int result_line = linearSearch.search(data, target);
    linearSearch.displaySearchResults(std::cout, result_line, target);
    JumpAlgorithm jumpSearch;
    int result_jump = jumpSearch.search(data, target);
    jumpSearch.displaySearchResults(std::cout, result_jump, target);
    BinaryAlgorithm binarySearch;
    int result_bi = binarySearch.search(data, target);
    binarySearch.displaySearchResults(std::cout, result_bi, target);
    return 0;

}