#include <iostream>
using namespace std;
#include "Point.h"

int main() {
    Point p1(1,2,3);
    Point p2(4,5,6);

    Point p3;
    p3.setX(7);
    p3.setY(8);
    p3.setZ(9);
    cout << p3.toString() << endl;
    cout << p3.getX() << endl;
    cout << p3.getY() << endl;
    cout << p3.getZ() << endl;

    cout << p1.Distance(p1,p2);

}

