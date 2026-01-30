#include <iostream>
using namespace std;
int main() {
    int a = 8;
    int b = a++; //post-increment: first assign then increment
    cout << a << endl; //9
    cout << b << endl; //8

    int c = 8;
    int d = ++c; //pre-increment: first increment then assign
    cout << c << endl; //9
    cout << d << endl; //9
}