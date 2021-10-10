#include <iostream>
using namespace std;
class student
{
protected:
char name[50];
int roll;
int marks;
public:
void show()
{
cout << "NAME is:" << name << endl;
cout << "ROLL is:" << roll << endl;
cout << "MARKS is:" << marks << endl;
}
};
class topper : public student
{
static topper s[3];
public:
void input()
{
cout << "Enter Name, Roll, and Marks out of 100:";
cin >> name >> roll >> marks;
}
void sort(topper a[], int n) 
{
for (int i = 0; i < n - 1; i++)
{
for (int j = 0; j < n - i - 1; j++)
{
if (a[j].marks > a[j + 1].marks) 
{
topper x = a[j];
a[j] = a[j + 1];
a[j + 1] = x; 
} 
} 
} 
}
void topin(topper a[], int n) 
{
sort(a, n);
s[0] = a[n - 1];
s[1] = a[n - 2];
s[2] = a[n - 3];
}
void output()
{
for (int i = 0; i < 3; i++)
{
cout << "RANK " << i + 1 << endl; s[i].show();
} 
}
};
topper topper::s[3];
int main()
{
int n;
cout<<"How many students:";
cin>>n;
topper a[n];
for(int i=0;i<n;i++)
{ 
    a[i].input();
}
a[0].topin(a,n);
a[0].output();
return 0; 
}