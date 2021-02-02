#include<iostream>
#include<cmath>
#include <typeinfo>
using namespace std;
#include<string>



class Shape
{​​
int dim;
public:
Shape(int dim):dim(dim){​​}​​
int getDim()const {​​ return dim; }​​
virtual int area() = 0;
}​​;
class Rectangle :public Shape
{​​
int l,b;
public:
Rectangle(int d, int l, int b):Shape(d),l(l),b(b){​​}​​
virtual int area()override {​​ return l * b; }​​
void displayRectangle() {​​
cout << "l" << l << "b" << b << endl;
}​​
}​​;
class Circle :public Shape
{​​
int r;
public:
Circle(int d, int r) :Shape(d), r(r) {​​}​​
virtual int area()override {​​ return 3.14 * r*r; }​​
int circumference() {​​ return 2 * 3.14*r; }​​
}​​;
void workwithObjects(Shape *p)
{​​
cout << "Dimension of object" << p->getDim() << endl;
cout << "Area of the object is"<<p->area()<<endl;
if (typeid(Rectangle) == typeid(*p)) {​​
Rectangle *rect = dynamic_cast<Rectangle *>(p);
if (rect) {​​
cout << "Rectangle detial" << endl;
rect->displayRectangle();
}​​
}​​
else if (typeid(Circle) == typeid(*p)) {​​



Circle *cir = dynamic_cast<Circle *>(p);
if (cir)
{​​
cout << "Circumference is" << cir->circumference() << endl;
}​​
}​​
}​​
int main()
{​​
Shape *shapes[4];
Rectangle screen1(2, 3, 4), screen2(2, 5, 6);
Circle table(3, 6.3), sofa(3, 7.4);
shapes[0] = &screen1;
shapes[1] = &screen2;
shapes[2] = &table;
shapes[3] = &sofa;
for (int i = 0; i < 4; i++)
{​​
workwithObjects(shapes[i]);
}​​
return 0;
}​​