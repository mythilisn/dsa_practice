#include <iostream>
using namespace std;
int main() {
    int n;
    for(int i = 0; i >= 0; i++) {
        cout << "Enter a number: ";
        cin >> n;
        if(n%10 == 0) {
            break;
        }
        cout << "You entered: " << n << endl;
    }
        
        
}
