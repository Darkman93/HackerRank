#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int day, month, year;
    int expectedD, expectedM, expectedY;

    cin >> day       >> month     >> year;
    cin >> expectedD >> expectedM >> expectedY;

    int D = day   - expectedD;
    int M = month - expectedM;
    int Y = year  - expectedY;

    int fine = 0;

    if(D > 0 && M == 0 && Y == 0){
        fine = 15 * D;
    }
    else if(M > 0 && Y == 0){
        fine = 500 * M;
    }
    else if(Y > 0){
        fine = 10000;
    }

    cout << fine;

    return 0;
}
