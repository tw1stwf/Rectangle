#include <iostream>
#include <conio.h>
#include <stdio.h>

namespace N
{
    class Rectangle
    {
    private:
        double x_A, y_A, x_B, y_B, x_C, y_C, x_D, y_D;
        double d1, d2, d3, d4, P;
    public:
        void Input(double _x_A = 5, double _y_A = 5, double _x_B = 10, double _y_B = 5, double _x_C = 10, double _y_C = 10, double _x_D = 5, double _y_D = 10);
        void Print();
        int isSquare();
        int RectanglePerimetr();
    };
}
