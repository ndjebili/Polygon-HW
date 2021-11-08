//
// Created by nizam on 11/4/2021.
//

#ifndef DJEBILI_HW3_Q2_RECTANGLE_H
#define DJEBILI_HW3_Q2_RECTANGLE_H

#include "Polygon.h"

class Rectangle: public Polygon {
public:
    Rectangle();
    Rectangle(int recWidth, int recHeight);
    int getArea();
    void draw();

};


#endif //DJEBILI_HW3_Q2_RECTANGLE_H
