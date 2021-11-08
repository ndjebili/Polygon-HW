//
// Created by nizam on 11/4/2021.
//

#include "Triangle.h"
#include <iostream>
using std::cout;
using std::endl;


Triangle::Triangle() {}

Triangle::Triangle(int triWidth, int triHeight): Polygon(triWidth, triHeight) {}

int Triangle::getArea()
{
    int area;
    area = (width * height) * 0.5;

    return area;
}

void Triangle::draw() {
    for (int i = 1; i <= height; i++){
        for (int a = 1; a <= height-i; a++)
            cout<<' ';
        for (int b = 1; b <= 2*i-1; b++)
            cout << '*';
        cout<<endl;
    }
}