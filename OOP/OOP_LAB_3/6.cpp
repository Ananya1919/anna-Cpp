#include<iostream>
using namespace std;
float area(float b=2,float h=4)
{
    return (b*h*0.5);
}
int main()
{
    float b,h;
    cout<<"Enter base and height:\n";
    cin>>b>>h;
    cout<<"Actual value Area is:" << area(b,h) << endl;
    cout<<"Default value Area is:"<< area()<< endl;
    return 0;
}