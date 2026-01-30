#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 6;
    cout << ((a>b) && (a!=b)) << endl; //1 && 1 = 1
    cout << ((a<b) || (a==b)) << endl; //0 || 0 = 0
    cout << !(a>b) << endl; // !1 = 0
    return 0;
}