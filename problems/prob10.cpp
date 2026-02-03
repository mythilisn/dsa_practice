//Write a C++ program to get a number from the user and print whether it's positive, negative or zero.


#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "negative number" << endl;
    }
    else if( num == 0) {
        cout << "the number is zero" << endl;
    }
    else {
    cout << "the number is positive" << endl;
    }
return 0;
}

//(num < 0) ? "negative number" : (num == 0) ? "the number is zero" : "the number is positive"


