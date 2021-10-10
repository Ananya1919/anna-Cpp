#include <iostream>
using namespace std;
class B;
class A
{
    int a;
    public: 
    void input(int a1)
    {
        a=a1;
        cout << "a ="<< a << endl;
    }
    friend void sum(A&,B&);
};
class B
{
    int b;
    public :
    void input(int b1)
    {
        b=b1;
        cout <<"b =" << b << endl;
    }
    friend void sum(A&,B&);
};
void sum(A &m, B &n)
{
    int s = m.a + n.b;
    cout << "sum is = " << s << endl;
}
int main()
{
    int a2,b2;
    cout <<"enter the number 1 and number 2" << endl;
    cin >> a2 >> b2;
    A ob1;
    B ob2;
    ob1.input(a2);
    ob2.input(b2);
    sum(ob1,ob2);
    return 0;
}