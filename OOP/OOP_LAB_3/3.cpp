#include <iostream>
using namespace std;
class even
{
    public :
    int i ;
    void ev();
};
void even :: ev()
{
    cout << " the even numbers between 1 to 150 are " << endl;
    for(i=1;i<=150;i++)
    {
        if(i%2==0)
        {
            cout << i << " " ;
        }
    }
}
int main()
{
    even obj;
    obj.ev();
    return 0;
}