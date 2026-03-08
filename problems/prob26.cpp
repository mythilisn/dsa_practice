//to check if an number is armstrmg number or not
#include <iostream>
using namespace std;

int main() {
    int n, lastdig, cube, sum = 0;
    
    cout << "Enter a number:";
    cin >> n;
    int original = n;
    while(n > 0) {
        lastdig = n % 10;
        cube = lastdig * lastdig * lastdig;
        sum = sum + cube;
        n = n / 10;
    }
    cout << "Sum of cubes of digits: " << sum << endl;

    if(sum == original) {
        cout << "The number is an armstrong number" << endl;
    }
    else {
        cout << "The number is not an armstrong number" << endl;
    }
    return 0;
}