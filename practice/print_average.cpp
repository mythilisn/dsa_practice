// input marks of science, maths and english and calculate it's average

#include <iostream>
using namespace std;

int main() {
    float science, english, math;
    cout<<"Enter the marks of each subject in the specified order (science, english, math): "<<endl;
    cin>>science>>english>>math;
    float average = (science + english + math)/3;
    cout<<"Average: "<<average<<endl;
    return 0;
}