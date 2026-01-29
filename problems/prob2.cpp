// Enter cost of 3 items from the user (using float data type) - a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)




#include <iostream>
using namespace std;

int main() {
    float pencil, pen, eraser;
    cout<<"Enter the cost of pencil, pen and eraser in the specified order (pencil, pen, eraser): ";
    cin>>pencil>>pen>>eraser;
    float total = pencil + pen + eraser;
    float gst = total * 0.18;
    float finalTotal = total + gst;
    cout<<"Total cost (before GST): "<<total<<endl;
    cout<<"GST (18%): "<<gst<<endl;
    cout<<"Final total cost (after GST): "<<finalTotal<<endl;
    return 0;
}