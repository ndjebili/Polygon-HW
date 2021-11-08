//
// Created by nizam on 11/4/2021.
//

#ifndef DJEBILI_HW3_Q2_POLYGON_H
#define DJEBILI_HW3_Q2_POLYGON_H


class Polygon {

public:
    Polygon();
    Polygon(int newWidth, int newHeight);
    void setWidth(int newWidth);
    void setHeight(int newHeight);
    virtual int getArea() = 0;
    virtual void draw () = 0;

protected:
    int width = 0;
    int height = 0;
};


#endif //DJEBILI_HW3_Q2_POLYGON_H
