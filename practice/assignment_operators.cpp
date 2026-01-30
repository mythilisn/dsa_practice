#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = a;
    b += 3; // equivalent to b = b + 3
    cout << b << endl; // Outputs 8
    b -= 2; // equivalent to b = b - 2
    cout << b << endl; // Outputs 6

    b *= 4; // equivalent to b = b * 4
    cout << b << endl; // Outputs 24
    b /= 6; // equivalent to b = b / 6
    cout << b << endl; // Outputs 4

    return 0;
}