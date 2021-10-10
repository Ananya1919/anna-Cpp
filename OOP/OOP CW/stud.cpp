#include <iostream>
#include<string.h>
using namespace std;
class stu
{
    int roll;
    char name[20];

public:
    void input(char n[],int r)
    {
        strcpy(name,n);
        roll=r;
        cout<<name<<" "<<roll<<endl;
    }
};
int main()
{
    stu m;
    int r; char name[20];
    cin >> name >> r;
    m.input(name, r);
    return 0;
}