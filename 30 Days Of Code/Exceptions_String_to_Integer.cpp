#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string S;
    cin >> S;

    try
    {
        int i = stoi(S);
        cout << i << '\n';
    }
    catch (invalid_argument const &e)
    {
       // cout << "Bad input: std::invalid_argument thrown" << '\n';
       cout << "Bad String";
    }
    catch (out_of_range const &e)
    {
        cout << "Integer overflow: std::out_of_range thrown" << '\n';
    }

    return 0;
}

