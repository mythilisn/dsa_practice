/* Write a program to calculate the area of a circle.
Input : r (radius) Output : PI*r*r (area) */

#include <iostream> 
#define PI 3.14
using namespace std;

int main() {
    float r;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>>r;
    float area = PI * r * r;
    cout<<"the are of the circle is: "<<area<<endl;
    return 0;
}
