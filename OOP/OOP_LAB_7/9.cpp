#include <iostream>
#include <string>
using namespace std;
class person
{
    protected :
    string name,DOB;
    int age,worth;
};
class baseball_player : public person
{   
    public :
    void input()
    {
        cout << "Enter the name :" << endl;
        cin >> name;
        cout << "Enter the date of birth :" << endl;
        cin >> DOB;
        cout << "Enter the age of the player :" << endl;
        cin >> age ;
        cout << "Enter the worth :" << endl;
        cin >> worth;
    }
    void output();
};
void baseball_player :: output()
{
    cout << "name :" << name << endl;
    cout << "DOB :" << DOB << endl;
    cout << "age :" << age << endl;
    cout << "worth :" << worth << endl;
}
int main()
{
    baseball_player ob;
    ob.input();
    ob.output();
    return 0;
}