#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Header.h"

using namespace std;
using namespace N;

int main()
{
    setlocale(LC_ALL, "Russian");
    Rectangle ob;
    ob.Input(1, 3, 3, 3, 3, 5, 1, 4);
    
    int i = ob.RectanglePerimetr();

    if (i < 50)
    {
        ob.Print();
        if (ob.isSquare() == 0)
        {
            cout << "Прямоугольник не является квадратом" << endl;
        }

        else
        {
            cout << "Прямоугольник является квадратом" << endl;
        }
    }

    else
    {
        cout << "Сумма сторон прямоугольника больше 50";
    }

    _getch();
}
