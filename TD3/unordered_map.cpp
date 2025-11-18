#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;


using namespace std;

vector<int> twoSumBruteForce(const vector<int>& nums, int target){
    for(int indice_first = 0; indice_first < nums.size(); indice_first++){
        for(int indice_second = 0; indice_second <nums.size(); indice_second++){
            if(nums[indice_first] + nums[indice_second]== target){
                 vector<int> retour = {indice_first, indice_second};
                 return retour;
            }
        }
    }

    return vector<int> {-1, -1};
}


vector<int> twoSumOptimal(const vector<int>& nums, int target){

    unordered_map<int, int> un_map;
    for(int indice_first = 0; indice_first < nums.size(); indice_first++){
        int delta = target - nums[indice_first];
        if(un_map.find(delta) != un_map.end()){
            return vector<int> {un_map[delta], indice_first};
        }
        un_map[nums[indice_first]] = indice_first;   
    }

    return vector<int> {-1, -1};
}


int main(){
    vector<int> nums = {2, 11, 15, 7};
    int target = 9;

    vector<int> indicesBruteForce = twoSumBruteForce(nums, target);
    cout << "Brute force solution : [ "
    << indicesBruteForce[0]
    <<","
    << indicesBruteForce[1]
    << "]"
    << endl;

    vector<int> indicesOptimal = twoSumOptimal(nums, target);
    cout << "Optimal solution : [ "
    << indicesOptimal[0]
    <<","
    << indicesOptimal[1]
    << "]"
    << endl;

    return 0;
}
