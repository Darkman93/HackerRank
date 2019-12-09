#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, double tip_percent, double tax_percent) {
    tip_percent = meal_cost * (tip_percent/100);
    tax_percent = meal_cost * (tax_percent/100);
    double total_cost = meal_cost + tax_percent + tip_percent;
    cout << round(total_cost);
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
