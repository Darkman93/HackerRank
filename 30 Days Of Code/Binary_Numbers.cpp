#include <bits/stdc++.h>

using namespace std;

int max_one(int);

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << max_one(n);

    return 0;
}


int max_one(int n){
    int tot = 0, max = 0;

    while(n != 0){
        int rest = n % 2;

        if(rest == 1){
            tot++;
            if(tot > max){
                max = tot;
            }
        }
        else tot = 0;

        n = n / 2;
    }

    return max;
}
