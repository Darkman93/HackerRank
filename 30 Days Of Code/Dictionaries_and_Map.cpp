#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string name;
    int number;

    map <string, int> phoneBook;

    for (int i = 0; i < n; i++){
        cin >> name >> number;
        phoneBook.insert(pair<string, int>(name, number));
    }

    while(cin >> name){

        if(phoneBook.find(name) != phoneBook.end()){
            cout << name << "=" << phoneBook[name] << endl;
        }

        else{
            cout << "Not found" << endl;
        }
    }

    return 0;  
}

