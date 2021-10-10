#include <iostream>
using namespace std;
class A
{
static int c;
public :
A()
{
c++;
cout << "Object Created " << endl;
}
static void display()
{
cout << c << endl;;
}
};
int A :: c;
int main()
{
A ob1;
A ob2;
A ob3;
A ob4;
cout << "\nObjects Created are " ;
A :: display();
A ob5;
cout << "\nObjects Created are " ;
A :: display();
return 0;
}