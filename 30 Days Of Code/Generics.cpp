#include <iostream>
#include <vector>
#include <string>

using namespace std;
template <typename T>
/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

void printArray(vector<T> elements){
    //for(auto i = elements.begin(); i != elements.end(); ++i){
        //cout << *i << endl;
    //}
    
    for(T elem : elements){
        cout << elem << endl;
    }
}

int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}