#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>      // std::setprecision

using namespace std;



double getMedian(vector<int> a, int start, int end) {
    double median = 0;
    int size = end - start + 1;
    if (size % 2 == 0) {
        median = (a[start + size / 2 - 1] + a[start + size / 2]) / 2;
    }
    else {
        median = a[start + (size - 1) / 2];
    }
    return median;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;

    vector<int> X(N);
    vector<int> F(N);

    for(int i = 0; i < N; i++){
        cin >> X[i];
    }

    for(int i = 0; i < N; i++){
        cin >> F[i];
    }

    int numElem = 0;

    for(int i = 0; i < N; i++){
        numElem += F[i];
    }

    vector<int> S(numElem);

    int index = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < F[i]; j++){
            S[index] = X[i];
            index++;
        }
    }

    sort(S.begin(), S.end());

    double Q1, Q3;
    
    Q1 = getMedian(S, 0, numElem / 2 - 1);

    if (numElem % 2 == 0) {
        Q3 = getMedian(S, numElem / 2, numElem - 1);
    }
    else {
        Q3 = getMedian(S, numElem / 2 + 1, numElem - 1);
    }
    
    cout << fixed << setprecision(1) << Q3-Q1;

    return 0;
}
