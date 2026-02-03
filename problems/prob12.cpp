/* Question 5 : For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits.
Eg : 371 is an armstrong number. 3*3*3 + 7*7*7 + 1*1*1 = 371 */



#include <iostream>
using namespace std;
 int main() {
    int num;
    cout << "enter a 3 digit number: " << endl;
    cin >> num;
    int n = num;

    int dig1 = n % 10;
    n = n / 10;
    int dig2 = n % 10;
    n = n / 10;
    int dig3 = n;

    int sum = (dig1 * dig1 * dig1) + (dig2 * dig2 * dig2) + (dig3 * dig3 * dig3);

    if(sum == num) {
        cout << num << " is an Armstrong number" << endl;
    }
    else {
        cout << num << " is not an Armstrong number" << endl;
    }


 }