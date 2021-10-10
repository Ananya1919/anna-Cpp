#include <iostream>
using namespace std;
class sum
{
    public :
    int i,n,s=0;
    void input();
    void number();
};
void sum :: input()
{
    cout << "enter the number " << endl;
    cin >> n;
}
void sum :: number()
{
    for(i=1;i<=n;i++)
    {
        s = s+i;
    }
    cout << "the sum is: \t" << s;
}
int main()
{
    sum obj;
    obj.input();
    obj.number();
    return 0;
}