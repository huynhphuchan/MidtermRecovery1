//
// Created by phuch on 5/8/2024.
//

#ifndef MIDTERMRECOVERY1_POINT_H
#define MIDTERMRECOVERY1_POINT_H

#include <string>
#include <sstream>
#include <valarray>

using std::string;
using std::stringstream;

class Point {
    // class member
private:
    double _x;
    double _y;
    double _z;

    //class method
public:
    // constructor
    Point() = default;
    Point(const double& x, const double& y, const double& z);
    // setter
    void setX(const double& x);
    void setY(const double& y);
    void setZ (const double& z);
    // getter
    double getX() const;
    double getY() const;
    double getZ() const;
    // to string
    string toString();
    // calculate the distant
    double Distance (const Point& p1, const Point& p2);
};



#endif //MIDTERMRECOVERY1_POINT_H
