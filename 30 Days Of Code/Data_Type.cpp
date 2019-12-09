#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.

    int x;
    double k;
    string w; 
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    std::cin >> x;
    std::cin >> k;
    cin.ignore();  //ignores an end of line character 
    getline(cin, w);

    // Print the sum of both integer variables on a new line.
    
    std::cout << i+x << endl;

    // Print the sum of the double variables on a new line.

    //std::cout << (double) d+k << endl;
    printf("%.1lf \n", d+k);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    std::cout << s+w;

    return 0;