#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int n;
    std::cin>>n;
    int x[n];
    int occurence[n];
    for(int i = 0;i < n; i++){
        std::cin >> x[i];
        occurence[i] = 0;
    }

    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += x[i];
    }

    float mean = (float) sum/n;

    int last = sizeof(x)/sizeof(x[0]);
    sort(x, x+last);

    int avg = n/2;

    float median = (float) (x[avg-1] + x[avg])/2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(x[i] == x[j]){
                occurence[i]++;
            }
        }
    }

    int max = 0;
    int pos = 0;

    for(int i=0; i<n; i++){
        if(occurence[i] > max){
            max = occurence[i];
            pos = i;
        }
    }

    std::cout << mean <<endl;
    std::cout << median <<endl;

    if(max == 1){
        std::cout << x[0] <<endl;
    }
    else{
        std::cout << x[pos] <<endl;
    }
    


    return 0;
}
