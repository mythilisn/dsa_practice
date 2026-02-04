// Sum of odd digits in a number using while loop

#include <iostream>
using namespace std;
 int main() {
    int n, sum =0, digit;
    cout << "enter n: " << endl;
    cin >> n;
    while(n > 0) {
        digit = n % 10;
        if(digit%2 != 0) {
            sum = sum + digit;
        }
        n /= 10;
    }
    cout << "Sum of odd digits: " << sum << endl;
 }