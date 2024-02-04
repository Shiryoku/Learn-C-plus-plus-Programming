#include "Triangle.h"
#include <iostream>

using namespace std;

int main()
{
    Triangle t(4.0,6.0);
    cout << " The height is :" << t.getHeight() << endl;
    cout << " The Width is :" << t.getWidth() << endl;
    cout << " The perimeter is :" << t.get_Perimeter() << endl;
    cout << " The area is :" << t.get_Area() << endl << endl;


    t.resize(2.5);
    cout << " The height is :" << t.getHeight() << endl;
    cout << " The Width is :" << t.getWidth() << endl;
    cout << " The perimeter is :" << t.get_Perimeter() << endl;
    cout << " The area is :" << t.get_Area() << endl;


}