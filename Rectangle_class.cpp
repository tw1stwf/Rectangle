#include "Header.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
using namespace N;

void Rectangle::Input(double _x_A, double _y_A, double _x_B, double _y_B, double _x_C, double _y_C, double _x_D, double _y_D) // ввод координат вершин прямоугольника
{
    x_A = _x_A;
    y_A = _y_A;

    x_B = _x_B;
    y_B = _y_B;

    x_C = _x_C;
    y_C = _y_C;

    x_D = _x_D;
    y_D = _y_D;
}

void Rectangle::get() // вывод данных о наших точках
{
    cout << "Вы ввели следующие координаты прямоугольника:" << endl;
    cout << " A:" << "(" << x_A << "," << y_A << ")" << endl;
    cout << " B:" << "(" << x_B << "," << y_B << ")" << endl;
    cout << " C:" << "(" << x_C << "," << y_C << ")" << endl;
    cout << " D:" << "(" << x_D << "," << y_D << ")" << endl;
}

int Rectangle::RectanglePerimetr() // поиск периметра, для проверки что сумма сторон не больше 50
{
    d1 = sqrt(pow(x_B - x_A, 2) + pow(y_B - y_A, 2));
    d2 = sqrt(pow(x_C - x_B, 2) + pow(y_C - y_B, 2));
    d3 = sqrt(pow(x_D - x_C, 2) + pow(y_D - y_C, 2));
    d4 = sqrt(pow(x_A - x_D, 2) + pow(y_A - y_D, 2));

    P = d1 + d2 + d3 + d4;

    return P;
}

void Rectangle::Square() // сравним две соседние стороны, чтобы понять является ли треугольник квадратом
{
    a = sqrt(pow(x_B - x_A, 2) + pow(y_B - y_A, 2)); // сторона a
    b = sqrt(pow(x_C - x_B, 2) + pow(y_C - y_B, 2)); // сторона b

    if (a == b)
    {
        cout << "Прямоугольник является квадратом" << endl;
    }

    else
    {
        cout << "Прямоугольник не является квадратом" << endl;
    }

}
