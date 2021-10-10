#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout << "Constructor of Grandparent Class A Called " << endl;
        }
        ~A()
        {
            cout << "Destructor of Grandparent Class A Called " << endl;
            }
            };
            class B : public virtual A
            {
                public:
                B()
                {
                    cout << "Constructor of Parent Class B Called " << endl;
                    }
                    ~B()
                    {
                        cout << "Destructor of Parent Class B Called " << endl;
                        
}
};
class C : virtual public A
{
    public:
    C()
    {
        cout << "Constructor of Parent Class C Called " << endl;
        }
        ~C()
        {
            cout << "Destructor of Parent Class C Called " << endl;
            }
            };
            class D : public B, public C 
            {
                public:
                D()
                {
                    cout << "Constructor of Child Class D Called " << endl; 
                    
                }
                ~D()
                {
                    cout << "Destructor of Child Class D Called " << endl;
                    }
                    };
int main()
{
    cout << "Multipath :\n" << endl;
    D obj;
    return 0;
    }