#include<bits/stdc++.h>
using namespace std;
class Student{
    string name;
    int roll_no;
    int total_marks;
    static float total;
    static int n;
    public:
    void input()
    {
        cout<<"\nEnter the Name of the student: ";
        cin>>name;
        cout << "\nenter the roll number: " ;
        cin >> roll_no;
        cout<<"\nEnter the total marks of the student: ";
        cin>>total_marks;
        n++;
        total+=total_marks;
    }
    float average()
    {
        return total/(float)n;
    }
    void friend output();
};
float Student::total=0;
int Student::n=0;
int n;
Student *s;
void output()
{
    cout<<"The average of "<<n<<" Students is "<<s[0].average()<<"\n";
}
int main()
{
    cout<<"Enter the total number of students: ";
    cin>>n;
    s=new Student[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    output();
    return 0;
}