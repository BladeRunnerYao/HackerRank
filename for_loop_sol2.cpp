//
// Created by Tiyao Li on 29.11.21.
//
//level easy
// using map
/***
#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int, string> m{
            {1, "one"},
            {2, "two"},
            {3, "three"},
            {4, "four"},
            {5, "five"},
            {6, "six"},
            {7, "seven"},
            {8, "eight"},
            {9, "nine"},
            };

    int a, b;
    cin >> a >> b;
    for(int i = a; i < b+1; i++){
        if(i >= 1 & i <= 9){
            cout << m[i] << endl;
        }else{
            if(i%2 == 0){
                cout << "even" << endl;
            }else{
                cout << "odd"  << endl;
            }
        }
    }
    return 0;
}
***/