#include <iostream>
using namespace std;

int main() {
    int income;
    float tax;
    cout << "Enter your income(in lakhs): ";
    cin >> income;
    if (income < 5L) {
        cout << "0% tax" << endl;
        tax = 0;
    }
    else if (5L <= income <= 10L) {
        cout << "20% tax" << endl;
        tax = 0.2 * income;
    } 
    else if (income > 10L) {
        cout << "30% tax" << endl;
        tax = 0.3 * income;
    }
    cout << "Your tax is: " << (tax * 100000) << endl;
    
    return 0;
}