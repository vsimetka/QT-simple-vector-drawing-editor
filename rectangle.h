/**
 * PGR 2013 project
 * Rectangle's header file
 *
 * @author  xskota05 Klara Vankova
 *          xsimet00 Vojtech Simetka
 * @date    2013/11/26
 * @version 1
 * @file    rectangle.h
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"
#include "openglwidget.h"

class Rectangle
{
public:
    Rectangle(float x1, float y1, float x2, float y2);
    ~Rectangle();
    void paintMe() const;
    void paintPoints(float x, float y) const;
    void resize(float x1, float y1, float x2, float y2);
    bool getCounterPoint(float, float, float *, float *, Qt::Corner *orientation) const;

    Point getP1() const;
    void setP1(const Point &value);

    Point getP2() const;
    void setP2(const Point &value);

private:
    Point p1;
    Point p2;
    Point p3;
    Point p4;
};

#endif // RECTANGLE_H
