/* Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T) Output : (P*R*T) / 100 */



#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout<<"Enter principal, rate and time in the specified order (principal, rate, time): ";
    cin>>principal>>rate>>time;
    float SimpleInterest = (principal * time * rate) / 100;
    cout<<"simple interset is: "<<SimpleInterest<<endl;
    return 0;
}