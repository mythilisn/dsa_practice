#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number:";
    cin >> num;
    for(int i = 2; i <= 10; i++) {
        if(num%i == 0) {
            cout << num << " is not a prime number." << endl;
            continue;
            
        }
        else {
            cout << num << " is a prime number." << endl;
            break;
        }
    }
}