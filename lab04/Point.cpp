//
// Created by Szilárd on 10/12/2022.
//
#include "Point.h"
#include "math.h"

int Point::counter{0};

int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}

Point::Point(int x, int y) {
    counter++;
    if (x>=0 && x<M && y>=0 && y<M)
    {
        x=x;
        y=y;}
    else
    {
        x=0;
        y=0;}
}

double Point::distanceTo(const Point &point) const {
    return sqrt((getX() - point.getX()) * (getX() - point.getX()) + ((getY() - point.getY()) * (getY() - point.getY())));

}

Point::~Point() {
    counter--;
}

Point::Point(const Point &what) {
    x=what.x;
    y=what.y;
}
