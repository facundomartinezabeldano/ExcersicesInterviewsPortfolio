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

int aparitions (vector<int> v, int number){
    int aparitions = 0;
    for(int i = 0; i < v.size(); i++){
        if (v[i] == number){
            aparitions++;
        }
    }
    return aparitions;
}