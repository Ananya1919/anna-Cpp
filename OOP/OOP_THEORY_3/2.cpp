#include <iostream>
#include <string>
using namespace std;
class student 
{
    protected :
    int roll,age,sec;
    string name;
    public :
    void input1(int r,int a,int s,string n)
    {
        roll=r;
        age = a;
        sec = s;
        name = n;
    }
};
class marks
{
    protected:
    int m1,m2,m3;
    public:
    void input2(int marks1,int marks2, int marks3)
    {
        m1=marks1;
        m2=marks2;
        m3=marks3;
    }
};
class result : public student, public marks
{
    protected :
    int total,avg;
    public:
    void display();
};
void result:: display()
{
    total = m1+m2+m3;
    avg = (m1+m2+m3)/3;
    cout << "the name is :" << name << endl;
    cout << "the age is :" << age << endl;
    cout << "the roll number is "<< roll << endl;
    cout << "the section is" << sec << endl;
    cout << "the total marks : " << total << endl;
    cout << "the average marks are :" << avg << endl;

}
int main()
{
    result ob;
    ob.input1(1705,20,26,"Ananya");
    ob.input2(90,95,97);
    ob.display();
    return 0;
}