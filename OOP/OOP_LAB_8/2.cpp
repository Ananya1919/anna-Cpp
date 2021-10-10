#include<iostream>
using namespace std;
class tests
{
protected:
int test_marks;
};
class activities
{
protected:
int activities_marks;
};
class sports
{
protected:
int sports_marks;
};
class result:protected tests,protected activities,protected sports
{
int total;
public:
result()
{
total=0; }
void input()
{
cout<<"Enter test, sports, activities marks:";
cin>>test_marks>>sports_marks>>activities_marks; }
int total_marks()
{
total=test_marks+activities_marks+sports_marks;
return total; }
};
int main()
{
result r;
r.input();
cout<<"Total marks obtained is:"<<r.total_marks()<<endl;
return 0; }