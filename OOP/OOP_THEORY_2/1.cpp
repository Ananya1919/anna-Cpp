#include<iostream>
using namespace std;
class complex
{
    int r;
    int i;
    public:
    void input()
    {
        cout<<"Enter Real:";
        cin>>r;
        cout<<"Enter Imaginary:";
        cin>>i;
    }
    void output()
    {
        cout<<r<<"+"<<"i"<<i<<endl;
    }
    friend complex add(complex,complex);
};
complex add(complex a,complex b)
{
    complex c;
    c.r=a.r+b.r;
    c.i=a.i+b.i;
    return c;
}
int main()
{
    complex a1,b1,c1;
    a1.input();
    b1.input();
    c1=add(a1,b1);
    c1.output();
    return 0;
}