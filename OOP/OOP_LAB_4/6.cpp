#include <iostream>
using namespace std;
void increment(int a)
{
    cout << "the incremented value is " << ++a << endl;
}
int main()
{
    int n;
    cout <<"enter a value to be incremented" << endl;
    cin >> n;
    increment(n);
    return 0;
}