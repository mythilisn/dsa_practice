#include <iostream>
using namespace std;
int main () {
    cout << (10/3.0) << endl; //o/p in float, beacuse float is a bigger datatype, compiler decides and gives the output in bigger data type
    cout << ('A' + 1) << endl; //int is a bigger datatype hence output will be in int
    cout << ('H' + 'M') << endl;
    cout << ('H' - 'M') << endl;
    cout << int('H') << endl;
    return 0;
}