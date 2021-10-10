#include <iostream>
using namespace std;
class volumes
{
    public:
    int r,x,y,l,b,h;

float volume(int r1)
{
    r=r1;
    cout << "the volume of sphere is: " <<endl;
    float vs = (4 * 3.14 * r * r * r)/3;
    return vs;
}
float volume(int x1, int y1)
{
    x=x1;
    y=y1;
    cout <<"the volume of cylinder is: " << endl;
    float vc = 3.14 * x * x * y;
    return vc;
}
float volume(int l1, int b1, int h1)
{
    l=l1;
    b=b1;
    h=h1;
    cout <<"the volume of cuboid is: " << endl;
    float v = l * b * h;
    return v;
}
};
int main()
{
    volumes o;
    int r2,x2,y2,l2,b2,h2;
    cout << "enter the radius of sphere" << endl;
    cin >> r2;
    cout << "enter the radius and height of cylinder" << endl;
    cin >> x2 >> y2;
    cout<< "enter the lenght breadth and height of cuboid" << endl;
    cin >> l2 >> b2 >> h2;
    cout << o.volume(r2) << endl;
    cout << o.volume(x2,y2) << endl;
    cout << o.volume(l2,b2,h2) << endl;
    return 0;
}