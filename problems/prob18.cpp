// Sum of digits of a number using while loop

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;
    cout << "enetr n: " << endl;
    cin >> n;
    while(n > 0) {
    digit = n % 10;
    sum = sum + digit;
    n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}