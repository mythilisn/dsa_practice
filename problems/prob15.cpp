//sum of n natural numbers

#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout << "Enter a number: " << endl;
    cin >> n;
    for(int i=0; i<=n; i++) {
        sum= sum + i;
    }
    cout << "the sum of first "<< n << " natural numbers is: " << sum << endl;
}