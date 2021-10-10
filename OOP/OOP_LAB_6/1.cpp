#include <iostream>
using namespace std;
class complex
{
    int r, i;
    int *r1=new int;
    int *i1=new int;

public:
    complex()
    {
        r = 0;
        i = 0;
        cout << "Default constructor:\t\t";
        cout << "complex number is:" << r << "+" << i << "i" << endl;
    }
    complex(int x, int y)
    {
        r = x;
        i = y;
        cout << "parameterized constructor:\t";
        cout << "complex number is:" << r << "+" << i << "i" << endl;
    }
    complex(complex &c)
    {
        r = c.r;
        i = c.i;
        cout << "copy constructor:\t\t";
        cout << "complex number is:" << r << "+" << i << "i" << endl;
    }
    complex(int *a, int *b)
    {
        *r1 = *a;
        *i1 = *b;
        cout << "Dynamic constructor:\t\t";
        cout << "complex number is:" << *r1 << "+" << *i1 << "i" << endl;
    }
    ~complex()
    {
        cout << "Destructor is called" << endl;
        delete r1;
        delete i1;
    }
};
int main()
{
    int real, imaginary;
    cout << "Enter real and imaginary part:\n";
    cin >> real >> imaginary;
    complex ob1;
    complex ob2(real, imaginary);
    complex ob3(ob2);
    complex ob4(&real, &imaginary);
    return 0;
}