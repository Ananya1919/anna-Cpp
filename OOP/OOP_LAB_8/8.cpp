#include <iostream>
using namespace std;
class shape
{
protected:
float area;
};
class circle : protected shape
{
float radius;
public:
void input()
{
cout << "Enter radius:";
cin >> radius; }
void show_area()
{
area = 3.14 * radius * radius;
cout << "Area of circle is:" << area << endl; }
};
class rectangle : protected shape
{
float l, b;
public:
void input()
{
cout << "Enter length and breadth:";
cin >> l >> b; }
void show_area()
{
area = l * b;
cout << "Area of rectangle is:" << area << endl; }
};
class traingle : protected shape
{
float b, h;
public:
void input()
{
cout << "Enter base and height:";
cin >> b >> h;
}
void show_area()
{
area = 0.5 * b * h;
cout << "Area of triangle is:" << area << endl; }
};
int main()
{
circle c;
rectangle r;
traingle t; c.input();
c.show_area();
r.input();
r.show_area();
t.input();
t.show_area();
return 0; }