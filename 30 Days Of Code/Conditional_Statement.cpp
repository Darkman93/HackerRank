#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(N%2 == 1){
        cout << "Weird";
    }
    else if (1 < N && N < 6) {
        cout << "Not Weird";
    }
    else if (5 < N && N < 21) {
        cout << "Weird";
    }
    else{
        cout << "Not Weird";
    }
    return 0;
}
