#include <iostream>
#include <vector>
using namespace std;

bool itsin (vector<int> list, int number){
    for (int i = 0; i < list.size(); i++){
        if (list[i] == number){
            return true;
        }
    }
    return false;
}

int occurrences (vector<int> v, int number){
    int occurrences = 0;
    for(int i = 0; i < v.size(); i++){
        if (v[i] == number){
            occurrences++;
        }
    }
    return occurrences;
}
