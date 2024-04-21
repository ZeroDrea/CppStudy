#include <iostream>
#include <vector>
#include <map>
#include "BaseHead.h"

using namespace std;


int main(){

    int a = 10, b = 5;

    cout << Add(a, b) << endl;
    cout << Sub(a, b) << endl;
    cout << Mul(a, b) << endl;
    cout << Div(a, b) << endl;

    map<int, int> mp = {{1, 2}, {2, 3}, {4, 5}};

    for(const auto& [a, b] : mp){
        cout << b << endl;
    }

    return 0;
}