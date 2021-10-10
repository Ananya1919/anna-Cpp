#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<" b="<<b<<endl;
}
void swapv(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"a="<<*a<<" b="<<*b;
}
void swapz(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    int p,q;
    cin>>p>>q;
    swap(p,q);
    swapv(&p,&q);
    swapz(p,q);
    return 0;
}