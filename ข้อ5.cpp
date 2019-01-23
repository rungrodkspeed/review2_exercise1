#include<iostream>
using namespace std;

double findAreaTriangle(double base, double height)
{
    double area;
    return area=0.5*base*height;
}

int main()
{
    double a,b;
    cout<<"Enter height:";
    cin >> a;
    cout << "Enter base:";
    cin >>b;
    cout <<"Area = " <<findAreaTriangle(b,a);
    return 0;
}