#include<iostream>
#include<string.h>
using namespace std;
class STRING
{
    char str[50];
    int l;
    char *st=new char[50];

public:
    STRING()
    {
        strcpy(str,"XYZ");
        l=strlen(str);
        cout << "Default constructor\n";
        cout << "STRING is:" << str << " and length is:" << l << endl;
    }
    STRING(char a[])
    {
        strcpy(str,a);
        l=strlen(str);
        cout << "parameterized constructor\n";
        cout << "STRING is:" << str << " and length is:" << l << endl;
    }
    STRING(STRING &c)
    {
        strcpy(str,c.str);
        l = strlen(str);
        cout << "copy constructor\n";
        cout << "STRING is:" << str << " and length is:" << l << endl;
    }
    STRING(char *a,int p)
    {
        strcpy(st,a);
        l=strlen(st);
        cout << "Dynamic constructor\n";
        cout << "STRING is:" << st << " and length is:" << l << endl;
        strcpy(str,st);
    }
    void con(STRING &b)
    {
        int z=0;
        for(int i=0;i<l;i++)
        {
            str[z++]=str[i];
        }
        for(int i=0;i<l;i++)
        {
            str[z++]=b.str[i];
        }
    }
    void show()
    {
        cout<<"String is:"<<str<<endl;
    }
    ~STRING()
    {
        cout << "Destructor is called" << endl;
        delete []st;
    }
};
int main()
{
    char str[50],str1[50];
    cout<<"Enter string 1:";
    cin>>str;
    cout<<"Enter string 2:";
    cin>>str1;
    STRING ob1;
    STRING ob2(str);
    STRING ob3(ob2);
    STRING ob4(str1,0);
    ob2.con(ob4);
    ob2.show();
    return 0;
}