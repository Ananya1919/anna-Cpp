#include <iostream>
using namespace std;
class areas
{
    public : 
    int b1,h1,a1,r1;
    long l1,x1,y1;
    
float area(int b,int h)
{
    b1=b;
    h1=h;
    cout << "the area of triangle is " << endl;
    float at = 0.5 * b1 * h1;
    return at;
}
float area(int a, long l)
{
    a1=a;
    l1=l;
    cout << "the area of rectangle is " << endl;
    float ar = a1 * l1;
    return ar;
}
float area( int r)
{
    r1=r;
    cout << "the area of circle is " << endl;
    float ac = 3.14 * r1 *r1 ;
    return ac;
}
float area(long x,long y)
{
    x1=x;
    y1=y;
    cout << "the area of cylinder is " << endl;
    float acy = (2* 3.14 * x1 * y1) + (2* 3.14 *x1 *x1);
    return acy;
}
};
int main()
{
    areas o;
    int b2,h2,a2,r2;
    long l2,x2,y2;
    cout << "enter base and height of triangle" << endl;
    cin >> b2 >> h2;
    cout << "enter lenght and breadth of rectangle " << endl;
    cin >> a2 >> r2 ;
    cout << "enter radius of circle" << endl;
    cin >> l2;
    cout << "enter radius and height of cylinder" << endl;
    cin >> x2>> y2;
    cout << o.area(b2,h2) << endl;
    cout << o.area(a2,l2) << endl;
    cout << o.area(r2) << endl;
    cout << o.area(x2,y2) << endl;
    return 0;
}

