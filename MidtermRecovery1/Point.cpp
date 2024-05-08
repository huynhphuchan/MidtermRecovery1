//
// Created by phuch on 5/8/2024.
//

#include "Point.h"

// constructor
Point::Point( const double& x, const double& y, const double& z){
    _x = x;
    _y = y;
    _z = z;
}
// setter
void Point::setX(const double& x) {
    _x = x;
}
void Point::setY(const double& y){
    _y = y;
}
void Point::setZ (const double& z){
    _z = z;
}
// getter
double Point::getX() const{
    return _x;
}
double Point::getY() const{
    return _y;
}
double Point::getZ() const{
    return _z;
}
// to string
string Point::toString() {
    stringstream sstrm;
    sstrm << "(" << _x << ", " << _y << ", " << _z << ")";
    return sstrm.str();
}

double Point::Distance (const Point& p1, const Point& p2){
    double total = 0.0;
    total = (p1.getX() - p2.getX())*(p1.getX() - p2.getX());
    total += (p1.getY() - p2.getY())*(p1.getY() - p2.getY());
    total += (p1.getZ() - p2.getZ())*(p1.getZ() - p2.getZ());
    return sqrt(total);
}
