#include <iostream>
using namespace std;
int main () {
    cout << (int)(10/3.0) << endl;  
    cout << (char)('A' + 1) << endl; 
    cout << (char)('H' + 'M') << endl;
    cout << ((float)'H' - 'M') << endl; //The values internally are -5.0 and 72.0, but cout is "smart" (or lazy, depending on how you look at it) and hides trailing zeros by default to keep the output clean.
    cout << ((float)int('H')) << endl;
    cout << ((float)10/3) << endl;
    
    return 0;
}