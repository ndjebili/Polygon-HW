//
// Created by nizam on 11/4/2021.
//

#include "Rectangle.h"
#include <iostream>
using std::cout;
using std::endl;

Rectangle::Rectangle(){}

Rectangle::Rectangle(int recWidth, int recHeight): Polygon(recWidth, recHeight) {}

int Rectangle::getArea() {
   int area;
    area = width * height;
    return area;
}

void Rectangle::draw() {
for (int i = 0; i <  height; i++){
    for (int a = 0; a < width; a++)
        cout<<"*";
    cout<<endl;
}

}