//
// Created by nizam on 11/4/2021.
//

#ifndef DJEBILI_HW3_Q2_TRIANGLE_H
#define DJEBILI_HW3_Q2_TRIANGLE_H
#include "Polygon.h"
#include <iostream>



class Triangle: public Polygon {
public:
    Triangle();
    Triangle(int triWidth, int triHeight);
    int getArea();
    void draw();

};


#endif //DJEBILI_HW3_Q2_TRIANGLE_H
