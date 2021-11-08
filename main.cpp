#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    //Polygon p1;

    //(Question 1) its not letting it compile because the polygon class became an abstract class
    // when the virtual function was defined as pure function.

    //(Question 2) It still doesnt compile because there is another pure virtual function in the
    //polygon class which is the draw function. It still makes the Polygon class abstract

    Polygon *pptr;
    Rectangle r1(10, 5);
    pptr=&r1;
    cout<<"Area of Rectangle is: "<<r1.getArea()<<endl;
    pptr->draw();
    r1.setHeight(5);
    r1.setWidth(5);
    cout<<"New area of Rectangle is: "<<r1.getArea()<<endl;
    pptr->draw();

    Triangle t1(5,5);
    pptr=&t1;
    cout<<"Area of Triangle is: "<<t1.getArea()<<endl;
    pptr->draw();
    t1.setWidth(3);
    t1.setHeight(3);
    cout<<"New area of Triangle is:  "<<t1.getArea()<<endl;
    pptr->draw();


    return 0;
}
