#include <iostream>
using namespace std;
class publication
{
protected:
float price;
char title[40];
public:
void input()
{
cout << "Enter title and price of the book:";
cin >> title >> price; 
}
};
class book : protected publication
{
int no_pages;
public:
void input()
{
publication::input();
cout << "Enter the no. of pages:";
cin >> no_pages; 
}
void output()
{
cout << "Title is:" << title << endl;
cout << "Price is:" << price << endl;
cout << "No. of pages are:" << no_pages << endl; 
}
};
class lecture : protected publication
{
int playtime;
public:
void input()
{
publication::input();
cout << "Enter the playtime:";
cin >> playtime; 
}
void output()
{
cout << "Title is:" << title << endl;
cout << "Price is:" << price << endl;
cout << "Playtime is:" << playtime << endl; }
};
int main()
{
book b;
lecture l; b.input();
b.output();
l.input();
l.output();
return 0;
}