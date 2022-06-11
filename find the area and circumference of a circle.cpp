#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World\n";
    float r,circumference,area,z;
    cout<<"Find the area and circumference of any circle \n";
    cout<<"Input the radius(1/2 of diameter) of a circle :\n";
    cin>>r;
    z=3.141592654;
    circumference=2*z*r;
    area=z*r*r;
    cout<<"The circumference of the circle is : "<<circumference<<"\nThe area of the circle is :"<<area;
    return 0;
}