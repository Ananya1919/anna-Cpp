#include<iostream>
using namespace std;
class employee
{
    protected:
    char name[50];
    int empno;
    char designation[10];
    int salinc;
};
class qualification:protected employee
{
    protected:
    int exp;
    char UG;
    char PG;
};
class salary:protected qualification
{
    public:
    void sal()
    {
        cout<<"Enter experience, UG and PG:";
        cin>>exp>>UG>>PG;
        if(exp>5&&UG=='Y'&&PG=='Y')
        {
            salinc=20;
        }
        else if(exp>5&&UG=='Y'&&PG=='N')
        {
            salinc=15;            
        }
        else if(exp>5&&UG=='N'&&PG=='N')
        {
            salinc=10;
        }
        else
        {
            salinc=5;
        }
    }
    void input()
    {
        cout<<"Enter name, employee id,Designation:";
        cin>>name>>empno>>designation;
        sal();
    }
    void output()
    {
        cout<<"NAME is:"<<name<<endl;
        cout<<"EMPLOYEE ID is:"<<empno<<endl;
        cout<<"DESIGNATION is:"<<designation<<endl;
        cout<<"SALARY increment is:"<<salinc<<endl;
    }
};
int main()
{
    salary ob;
    ob.input();
    ob.output();
    return 0;
}