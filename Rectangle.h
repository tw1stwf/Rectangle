#include <iostream>
#include <conio.h>
#include <stdio.h>

namespace N
{
    class Rectangle
    {
    private:
        double x_A, y_A, x_B, y_B, x_C, y_C, x_D, y_D;
        double  d1, d2, d3, d4, S, P, a, b;
    public:
        void Input(double _x_A, double _y_A, double _x_B, double _y_B, double _x_C, double _y_C, double _x_D, double _y_D);
        void get();
        int RectanglePerimetr();
        void Square();
    };
}
