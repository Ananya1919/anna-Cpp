#include <iostream>
#include <string>
using namespace std;
class student
{
    protected :
    int roll;
    string name;
    public :
    void input1()
    {
        cout << "Enter the student name :" << endl;
        cin >> name;
        cout << "Enter the student roll number :" << endl;
        cin >> roll;
    }
};
class fees : public student
{
    protected:
    double fees,amt;
    public :
    void input2()
    {
        cout << "Enter the fees " << endl;
        cin >> fees;
        cout << "The tax is 0.1 times of fees"<< endl;
    }
    void generate()
    {
        amt = fees + (fees*0.1);
        cout << "The total amount in the receipt is :" << amt << endl;
    }
};
class result : public student
{
    protected:
    int m;
    public :
    void input3()
    {
        cout << "Enter the marks of student" << endl;
        cin >> m;
    }
    void display()
    {
        if (m>=90)
        {
            cout << "grade is A" << endl;
        }
        else if(m<90 || m>=80)
        {
            cout <<"grade is B" << endl;
        }
        else if(m <80 || m>=70)
        {
            cout <<"grade is C" << endl;
        }
        else if(m<70 || m>=60)
        {
            cout << "grade is D" << endl;
        }
        else if(m<60 || m>=40)
        {
            cout <<"grade is E" << endl;
        }
        else 
        {
            cout <<"The student has failed and the grade is F" << endl;
        }
    }
};
int main()
{
    fees ob1;
    result ob2;
    ob1.input1();
    ob1.input2();
    ob2.input3();
    ob1.generate();
    ob2.display();
    return 0;
}