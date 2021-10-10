#include <iostream>
using namespace std;
class student
{
private:
                char name[50];
                int RollNo, Total;

public:
                void getDetails()
                {
                                cout << "Enter Name ";
                                cin >> name;
                                cout << "Enter roll no ";
                                cin >> RollNo;
                                cout << "Enter total marks ";
                                cin >> Total;
                }
                void display()
                {
                                cout << "Name - " << name << "\nRoll Number - " << RollNo << "\nTotal marks - " << Total;
                }
};
int main()
{
                student stud;
                cout << "Enter the details of the student \n";
                stud.getDetails();
                cout << "\n";
                cout << "Display the details of student \n";
                stud.display();
                cout << "\n";

                return 0;
}