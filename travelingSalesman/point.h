#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point(int x, int y);
    int getX();
    int getY();
    bool equals(Point p);
private:
    int x;
    int y;
};

#endif // POINT_H
