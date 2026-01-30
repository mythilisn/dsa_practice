#include <iostream>
#define I int //wherever there is I replace it with int, and this is a symbolic constant
using namespace std;
I main() {
    I num = 10;
    const I Y = 3; //const is used to declare constant variables, this cannot be chnaged in the entire code
    cout<<"the number is: "<<num<<endl;
    cout<<"the constant is: "<<Y<<endl;
}