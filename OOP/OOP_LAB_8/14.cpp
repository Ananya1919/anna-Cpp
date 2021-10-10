#include<iostream>
using namespace std;
class test
{
protected:
int test_marks;
public:
test(int n) {
test_marks=n; }
};
class sport
{
protected:
int sport_marks;
public:
sport(int n) {
sport_marks=n; }
};
class result:protected test,protected sport
{
int result_marks;
public:
result(int x,int y):test(x),sport(y) {
result_marks=x+y; }
void out()
{
cout<<"Result marks is:"<<result_marks<<endl; }
};
int main()
{
int x,y;
cout<<"Enter marks in test and sports:";
cin>>x>>y;
result ob(x,y);
ob.out();
return 0;
 }