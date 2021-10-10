#include<iostream>
using namespace std;
class DB;
class DM
{
 float meters,centimeters;
 public:
 DM(float m, float c)
 {
 	meters = m;
 	centimeters  = c;
 }
 friend void compares(DM & x,DB &y);
};
class DB
{
 float inch;
 float feet;
 public:
 	DB(float i, float f)
	{
 		inch = i;
 		feet = f;
	}

friend void compares(DM & ,DB & );
};
void compares(DM &a,DB &b)
{
	if((b.feet * 0.0254) < a.meters  )
    {
		cout<<"Distance in meters and centimers is larger\n";
	}
	else{
		cout<<"Distance in inches and feet is larger\n";
	}
}
int main()
{
    float m1,c1,i1,f1;
    cout << "enter the meters and centimeters " << endl;
    cin >> m1 >> c1;
    cout <<"enter the inches and feet" << endl;
    cin >> i1 >> f1;
 DM a(m1,c1);
 DB b(i1,f1);
compares(a,b);
return 0;
}