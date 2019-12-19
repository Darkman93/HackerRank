#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

        Difference(vector<int> elements){
            this->elements = elements; 
            maximumDifference = INT_MIN;           
        }

        void computeDifference(){
            for(int i = 0; i < this->elements.size(); i++){
                for(int j = i+1; j < this->elements.size(); j++){
                    if(abs(this->elements[i] - this->elements[j]) > this->maximumDifference){
                        this->maximumDifference = abs(this->elements[i] - this->elements[j]);
                    }
                }
            }
        }

};

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}