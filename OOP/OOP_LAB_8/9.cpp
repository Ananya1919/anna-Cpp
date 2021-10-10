#include<iostream>
using namespace std;
class employee
{
protected:
int empid;
char name[50];
int salary;
};
class regular:protected employee
{
int DA,HRA;
public:
void input()
{
cout<<"Enter empid, Name, DA and HRA:";
cin>>empid>>name>>DA>>HRA;
salary=HRA+DA; }
void out()
{
cout<<"Basic salary of "<<name<<" empid "<<empid<<" is:"<<salary<<endl; }
};
class part_time:protected employee
{
int hours,pay;
public:
void input()
{
cout<<"Enter empid, Name, no. of hours and pay per hour::";
cin>>empid>>name>>hours>>pay;
salary=30*pay*hours; }
void out()
{
cout<<"Basic salary of "<<name<<" empid "<<empid<<" is:"<<salary<<endl; }
};
int main()
{
regular r;
part_time p; r.input();
r.out();
p.input();
p.out();
return 0; }