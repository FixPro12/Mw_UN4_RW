// HW_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

class Vector
{
private:
    double x;
    double y;
    double z; 
public:
    Vector() : x(0), y(0), z(0)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void Show()
    {
        std::cout << x << ' ' << y << ' ' << z;
    }
    void length()
    {
        double a;
        a = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
        std::cout << '\n' << a;
    }
};




int main()
{
    Vector v1(7, 6, 8);
    v1.Show();
    v1.length();
}


