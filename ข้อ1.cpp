#include<iostream>
using namespace std;

int one()
{
    return 10/2;
}

int two()
{
    return 2/10;
}

int three()
{
    return 2/10.0;
}

int four()
{
    int x = 5;
    x = 69;
    return x;
}

int five() 
{
    int x=5,y=7.5;
    cout << x << y;
}

int six()
{
    cout << "x\ny";
}

int seven()
{
    return 5.5555555555;
}

int eight()
{
    float x = 5.5555555555;
    return x;
}

int nine()
{
    int x = 2;
    cout << x/10;
}

int ten()
{
    int x = 2;
    return x/10.0;
}

int eleven()
{
    double x = 2;
    return x/10;
}

int twelve()
{
    double x=5,y=7.5;
    cout << x << y;
}

int thirteen()
{
    double x=5,y=7.5;
    return y/x;
}

int main() 
{
    cout<< one <<endl << two << endl << three << endl << four << endl << five << endl << six << endl << seven << endl << eight << endl << nine << endl << ten << endl << eleven << endl << twelve << endl << thirteen << endl;
    return 0;
}