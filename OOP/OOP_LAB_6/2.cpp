#include<iostream>
using namespace std;
class time
{
    int h;
    int m;
    public:
    time(int x,int y=0)
    {
        h=x;
        m=y;
    }
    void show()
    {
        cout<<"time is "<<h<<" hours and "<<m<<" minutes"<<endl;
    }
};
int main()
{
    int hour,minutes;
    cout<<"Enter time in hh:mm format:\n";
    cin>>hour>> minutes;
    time t1(hour);
    time t2(hour,minutes);
    t1.show();
    t2.show();
    return 0;
}