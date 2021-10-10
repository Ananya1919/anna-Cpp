#include <iostream>
using namespace std;
class student
{
private:
char name[50];
int rollNo, total = 0;
float percentage;
int m[5];

public:
void getDetails()
{ 
 cout << "Enter Name ";
 cin >> name;
 cout << "Enter Roll no ";
 cin >> rollNo;
 cout << "Enter Marks of 5 sub ";
for (int i = 0; i < 5; i++)
 {
 cin >> m[i];
 total = total + m[i];
}
percentage = total / 5;
  }
 void display()
{
 cout << "Name - " << name << "\nRoll Number - " << rollNo << "\nTotal marks - " << total << "\npercentage - " << percentage;
   }
};
int main()
{
student stu;
cout << "Enter the details of the student \n";
stu.getDetails();
cout << "\n";
cout << "Display the details of student \n";
stu.display();
cout << "\n";

return 0;
}