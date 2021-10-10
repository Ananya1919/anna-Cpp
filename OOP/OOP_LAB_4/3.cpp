#include<iostream>
using namespace std;
class display
{
    public:
    void show(char c,int n);
    void fshow(char c);
    void fshow();
};
void display::show(char c='*',int n=80)
{
    for(int i=0;i<n;i++)
    cout<<c<<" ";
    cout<<endl;
}
void display::fshow(char c)
{
    for(int i=0;i<80;i++)
    cout<<c<<" ";
    cout<<endl;
}
void display::fshow()
{
    for(int i=0;i<80;i++)
    cout<<'*'<<" ";
    cout<<endl;
}
int main()
{
    display d;
    char c;
    int n;
    cout<<"Enter c and n:";
    cin>>c>>n;
    d.show(c,n);
    cout<<"default:"<<endl;
    d.show(c);
    d.show();
    cout<<"Overloading:"<<endl;
    d.fshow(c);
    d.fshow();
    return 0;
}