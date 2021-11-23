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
    ob.Input(5, 5, 10, 5, 10, 10, 5, 10);
    int i = ob.RectanglePerimetr();

    if (i < 50)
    {
        ob.get();
        ob.Square();
    }

    else
    {
        cout << "Сумма сторон прямоугольника больше 50";
    }

    _getch();
}