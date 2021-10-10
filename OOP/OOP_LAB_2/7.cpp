#include <iostream>
#include <cmath>
using namespace std;
class distan
{
public :
int x1,x2,y1,y2;
double d1,d2;
void input()
{
    cout << " Enter the values" << endl;
    cout << "Enter the x co-ordinate" << endl;
    cin >> x1;
    cin >> x2;
    cout << "Enter the y co-ordinate" << endl;
    cin >> y1;
    cin >> y2;
}
void calculate()
{
   
    d1 = (x2-x1)*(x2-x1)- (y2-y1)*(y2-y1);
    d2 = pow(d1,0.5);
    cout << "the distance between two points is : " << d2 << endl;
}
};
int main()
{
    distan obj;
    obj.input();
    obj.calculate();
    return 0;

}