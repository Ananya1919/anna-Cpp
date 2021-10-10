#include <iostream>
using namespace std;
class fibonacci 
{
public :
int i,n1=0,n2=1,n3,n;
void input()
{
    cout << "Enter the number till where the series is required " << endl;
    cin >> n;
    cout << n1 << " " << n2 << " " ;
}
void calculate()
{
    for(i=2;i<=n;i++)
    {
        n3=n1+n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}
};
int main() 
{
    fibonacci obj;
    obj.input();
    obj.calculate();
    return 0;
}