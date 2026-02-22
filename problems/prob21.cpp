// Write a program to reverse a given number n. For example, if n=1234 then the output should be 4321.

#include <iostream>
using namespace std;
int main() {
    int n, res =0, digit;
    cout << "enter n: ";
    cin >> n;
    while(n > 0) {
        digit = n % 10;
        res = res * 10 + digit;
        n /= 10;
    }
    cout << res;    
}