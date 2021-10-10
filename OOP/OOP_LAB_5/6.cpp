#include <iostream>
using namespace std;
class s3;
class s2;
class s1
{
    char *a = new char[40];

public:
    void input()
    {
        cout <<"input first string:\t";
        cin >> a;
    }
    friend void con(s1 x, s2 y, s3 z);
};
class s2
{
    char *b = new char[40];
public:
    void input()
    {
        cout <<"input second string:\t";
        cin >> b;
    }
    friend void con(s1 x, s2 y, s3 z);
};
class s3
{
    char*c=new char[80];
public:
    void show()
    {
        cout << "final string is:\t" << c << endl;
    }
    friend void con(s1 x, s2 y, s3 z);
};
void con(s1 x, s2 y, s3 z)
{
    int d = 0;
    for (int i = 0; x.a[i] != '\0'; i++)
    {
        z.c[d++] = x.a[i];
    }
    for (int i = 0; y.b[i] != '\0'; i++)
    {
        z.c[d++] = y.b[i];
    }
    z.show();
}
int main()
{
    s1 x;
    s2 y;
    s3 z;
    x.input();
    y.input();
    con(x, y, z);
    return 0;
}