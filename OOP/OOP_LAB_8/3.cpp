#include<iostream>
#include<string.h>
using namespace std;
class employee
{
protected:
int empno;
char name[40];
char designation[10];
char qualification[10];
};
class date:protected employee
{
string dob;
string doh;
public:
void input()
{
fflush(stdin);
cout<<"Enter employee number, Name, DOB, Designation, Qualification, and DOH:";
cin>>empno>>name>>dob>>designation>>qualification>>doh; }
void output()
{
fflush(stdout);
cout<<"Empno:"<<empno<<endl;
cout<<"Name:"<<name<<endl;
cout<<"DOB:"<<dob<<endl;
cout<<"Designation:"<<designation<<endl;
cout<<"Qualification:"<<qualification<<endl;
cout<<"DOH:"<<doh<<endl; }
};
int main()
{
date d; d.input();
d.output();
return 0;
}