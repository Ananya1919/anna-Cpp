#include <iostream>
using namespace std;
class A
{
private:
    int a, b;
public:
    void input()
    {
        cout <<"Enter two numbers:\n";
        cin >> a >> b;
    }
    void output()
    {
        cout << "values are:\t " << a << "\t" << b << endl; 
    }
    friend class B;
};

class B
{
public:
    void swapClassA(A& c)
    {
        int temp;
        temp = c.a;
        c.a = c.b;
        c.b = temp;
    }
};
int main()
{
    A a;
    B b;

    a.input(); 
    cout << "Before swapping: \n";
    a.output();
    b.swapClassA(a);
    cout << "After swapping: \n";
    a.output();
    cout << endl;
    return 0;
}