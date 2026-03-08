// print all the prime numbers from 2 to N
#include <iostream>
using namespace std;

int main() {
    int N = 15;
    bool isprime;
    for(int i = 2; i<=N; i++) {
        int curr = i;
        isprime = true;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isprime = false;
                break;
            }
        }
        if(isprime) {
        cout << curr << " ";
        }
    }

}
