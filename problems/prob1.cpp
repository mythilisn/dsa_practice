/* In a program, input the side of a square. You have to output the area of the square.
Input : n (side) Output : n*n (area)*/

#include <iostream>
using namespace std;

int main() {
    float n;
    cout<<"enter the side of the square: ";
    cin>>n;
    float area = n*n;
    cout<<"the area of square is: "<<area<<endl;
    return 0;
}