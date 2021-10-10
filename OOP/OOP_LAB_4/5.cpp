#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    cout << "enter the value of 1st number" << endl;
    cin >> a;
    cout << "enter the value of 2nd number" << endl;
    cin >> b;
    swap(&a,&b);
    cout << "value of 1st number is :" << a << endl;
    cout << "value of 2nd number is :" << b << endl;
    return 0;
}