#include <iostream>
using namespace std;
class length
{
private:
    int feet;
    int inches;

public:
    length(int f=0,int i=0)
    {
        feet=f;
        inches=i;
    }
    void getlength()
    {
        cout << "Feet:";
        cin >> feet;
        cout << "Inches:";
        cin >> inches;
    }
    void display()
    {
        while(inches>=12)
        {
            inches-=12;
            feet++;
        }
        cout << feet << " Feet and " << inches << " inches." << endl;
    }
    length operator+(length C)
    {
        length ans;
        ans.feet=feet+C.feet;
        ans.inches=inches+C.inches;
        return ans;
    }
    void add(length C1, length C2)
    {
        feet = C1.feet + C2.feet;
        inches = C2.inches + C1.inches;
    }
    length add(length C)
    {
        feet += C.feet;
        inches += C.inches;
        length d(feet,inches);
        return d;
    }
};

int main()
{
    length c1, c2, c3, c4,c5;
    c1.getlength();
    c2.getlength();
    c5=c1+c2;
    c3.add(c1,c2);
    c4=c1.add(c2);
    c3.display();
    return 0;
}