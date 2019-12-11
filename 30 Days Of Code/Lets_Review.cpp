#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int T;
    cin >> T;
    
    string S;

    for(int i = 0; i < T; i++){
        cin >> S;
        
        char word[S.size() + 1];
        strcpy(word, S.c_str());

        for(int j = 0; j< S.size(); j += 2){
            cout << word[j];
        }

        cout << " ";

        for(int j = 1; j< S.size(); j += 2){
            cout << word[j];
        }

        cout << endl;

    }


    return 0;
}