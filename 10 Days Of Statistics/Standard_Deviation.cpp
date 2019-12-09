#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;

    cin >> N;

    int X[N];
    int sum = 0;
    double mu;
    double sum_distance = 0;
    double sigma;

    for(int i = 0; i < N; i++){
        cin >> X[i];
        sum += X[i];
    }   

    mu = (double) sum/N;
    
    for(int i = 0; i < N; i++){
        sum_distance += ((X[i] - mu) * (X[i] - mu));
        //sum_distance += pow((X[i] - mu), 2.0);

    }

    //cout<< sum_distance<<endl;

    sigma = (double) sqrt(sum_distance / N);

    printf("%.1lf", sigma);
    
    return 0;
}
