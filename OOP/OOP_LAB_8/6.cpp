#include <iostream>
using namespace std;
class employee
{
protected:
char name[40];
int empno;
int salary;
char designation[10];
public:
void input()
{
cout << "Enter Name, empno, salary, designation:";
cin >> name >> empno >> salary >> designation; 
}
void show()
{
cout<<"Empno is:"<<empno<<endl;
cout<<"Name is:"<<name<<endl;
cout<<"Salary is:"<<salary<<endl;
cout<<"Designation is:"<<designation<<endl; 
}
};
class manager : public employee
{
static employee e;
public:
void input()
{
employee::input();
}
void manager_input()
{ e.input();
}
void manager_output()
{ 
    e.show();
}
};
employee manager::e;
int main()
{
int n;
cout<<"How many employees?";
cin>>n;
manager m[n];
cout<<"Enter Details for one manager and "<<n<<" employees:"<<endl; 
m[0].manager_input();
for(int i=0;i<n;i++)
{ 
m[i].input();
}
m[0].manager_output();
for(int i=0;i<n;i++)
{ 
    m[i].show();
}
return 0;
}