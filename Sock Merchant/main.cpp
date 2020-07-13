#include <iostream>
#include <vector>
#include "functions.cpp"
using namespace std;

int sockMerchant (vector<int> pile , int colors){
 int pairs = 0;
 vector<int> ivecounted;
 vector<int> helper;
 for (int i = 0; i < pile.size() ; i++){
     if (!itsin(ivecounted,pile[i])){
         ivecounted.push_back(pile[i]);
         helper.push_back(aparitions(pile,pile[i]));
     }
 }
 for(int i = 0; i < helper.size(); i++){
     pairs = pairs + helper[i]/2;
 }
 return pairs;
}





int main() {
    vector <int> pile = {10,10,10,30,50,10,20,30,50,50,10,50};
    cout << sockMerchant(pile,9) << endl;
    return 0;
}
