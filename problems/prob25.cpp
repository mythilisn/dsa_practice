//to find the product of  a number with the first 10 natural numbers
#include <iostream>
using namespace std;

int main() {
    int n, product;
    cout << "enter a number:";
    cin >> n;

    for(int i=1; i<=10; i++) {
        product = n * i;
        cout << n << " * " << i << " = " << product << endl;
    }

    return 0;

}