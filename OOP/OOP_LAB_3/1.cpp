#include <iostream>
using namespace std;
class number
{
    public :
    int i;
   
void num()
{
    cout << "the numbers from 10 to 1 are: " << endl;
    for(i=10;i>=1;i--)
    {
        cout << i << endl;
    }
}
};
int main()
{
    number obj;
    obj.num();
    return 0;
}
