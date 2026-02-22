//print digits of  given number in reverse order

#include <iostream>
using namespace std;

int main() {
    int n, digit;
    cout << "enter n: ";
    cin >> n;
    while(n > 0) {
        digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }
    return 0;
}