#include<iostream>
using namespace std;
class shape
{
protected:
int r;
public:
int circle()
{
return 3.14*r*r; }
};
class area:public shape
{
int l;
public:
void input()
{
cout<<"Enter radius and length:";
cin>>r>>l; }
int cone()
{
return circle()+(3.14*r*l);
}
};
int main()
{
area a; a.input();
cout<<"Area of circle is:"<<a.circle()<<endl;
cout<<"Area of cone is:"<<a.cone()<<endl;
return 0;
 }