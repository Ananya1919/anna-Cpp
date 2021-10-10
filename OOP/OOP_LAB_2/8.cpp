#include <iostream>
using namespace std;
class factorial
{
    public :
    int num,i,f=1;
void input()
{
    cout <<"Enter the number whose factorial is to be calculated "<< endl;
    cin >> num;
}
void calculate()
{
    for(i=1;i<=num;i++)
    {
    f = f*i;
    }
    cout << "The factorial of " << num<< " is: " << f << endl;
}
};
int main()
{
    factorial obj;
    obj.input();
    obj.calculate();
    return 0;
}