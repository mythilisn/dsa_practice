#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enetr a number: ";
    cin >> num;

    if(num < 0) {
        cout << "factorial does not exist for negative numbers" << endl;
    }
    
    else if(num == 0) {
        cout << "The factorial of 0 is 1" << endl;
    }
    else {
        int factorial = 1;
        for(int i = 1; i <= num; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << num << " is " << factorial << endl;
    }
}