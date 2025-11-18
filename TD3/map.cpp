#include <vector>
#include <set>
#include <map>
#include <iostream>
using namespace std;



void countFrequencyBruteForce(const vector<int>& numbers){

    set<int> visited;

    for(int value : numbers){
        if(visited.find(value) != visited.end()){
            continue;
        }
        visited.insert(value);
        unsigned int nb=0;
        for(int calcul : numbers){
            if (calcul==value) {
                nb++;
            }
        }
        cout << "nombre : "<< value <<"nb itération : "<< nb <<endl; 
    }
}

map<int, int> countFrequencyOptimal(const vector<int>& numbers){
    map<int, int> result;

    for(int calcul : numbers){
        result[calcul]++;
    }

    return result;
}

int main(){
    vector<int> number = {1,2,3,2,4,1,5,5,6};
    countFrequencyBruteForce(number);

    map<int, int> carte = countFrequencyOptimal(number);
    for(const auto& entry : carte){
        cout<< "key : "<< entry.first << " value : " <<entry.second << endl;
    }

    return 0;
}