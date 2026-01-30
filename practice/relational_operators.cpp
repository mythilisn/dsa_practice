#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 7;
    cout << (a < b) << endl;  // Outputs 0 (false)
    cout << (a > b) << endl;  // Outputs 1 (true)   
    cout << (a <= b) << endl; // Outputs 0 (false)
    cout << (a >= b) << endl; // Outputs 1 (true)
    cout << (a == b) << endl; // Outputs 0 (false)
    cout << (a != b) << endl; // Outputs 1 (true)

    return 0;
}