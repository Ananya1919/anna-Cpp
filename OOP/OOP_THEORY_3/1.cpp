#include <iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void input1(int r)
    {
        roll=r;
    }
    void output1()
    {
        cout << "roll number :" << roll << endl;
    }
};
class test : public student
{
    protected:
    int m1,m2;
    public :
    void input2 (int marks1, int marks2)
    {
        m1=marks1;
        m2=marks2;
    }
    void output2()
    {
        cout << "marks 1: " << m1  << " marks 2: "<< m2 << endl;
    }
};
class result : public test
{
    protected:
    int total;
    public:
    void display();
};
void result :: display()
{
    total=m1+m2;
    cout << "the total marks :" << total << endl;
    output1();
    output2();
}
int main()
{
    result o;
    o.input1(1704);
    o.input2(90,95);
    o.display();
    return 0;
}


