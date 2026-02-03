//build a calculator using switch case

#include <iostream>
using namespace std;
int main() {
    int a, b, choice;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Menu:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n";
    cout << "Enter your choice(1-4): ";
    cin >> choice;
    switch(choice) {
        case 1 : cout << "the result is: " << a + b << endl;
                break;
        case 2 : cout << "the result is " << a - b << endl;
                break;
        case 3 : cout << "The result is: " << a * b << endl;
                break;
        case 4 : cout << "the result is: " << (float)a/b << endl;
                break;
        default : cout << "Invalid choice";
                break;
    }
return 0;
}