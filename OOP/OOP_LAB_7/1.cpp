#include<iostream>
using namespace std;

class A 
{
  protected:
   
   int a,b;
  
  public:
   
   void Input1()
   {
       cout<<"enter the values of A and B\n";
       cin>>a>>b;
   }
};

class B:public A 
{
   public:
   
    void Sum()
    {
        cout<<"sum of 2 no is  "<<a+b<<endl;
    }
};

class C 
{
  protected:
  
   int p;
   
  public:
  
   void Get_1()
   {
      cout<<"enter the 1st no."<<endl;
      cin>>p;
   }
   
};

class D:public C 
{
    protected:
    
     int q;
     
    public:
    
     void Get_2()
     {
         cout<<"enter thw 2nd no."<<endl;
         cin>>q;
     }
};

class E:public D
{
    public:
    
     void Product()
     {
         cout<<"product of 2 no. is "<< p*q<<endl;
     }
};

class F
{
      protected:
  
   int x;
   
  public:
  
   void Data_1()
   {
      cout<<"input 1st value"<<endl;
      cin>>x;
   }
};

class G 
{
      protected:
  
   int y;
   
  public:
  
   void Data_2()
   {
      cout<<"input 2nd value"<<endl;
      cin>>y;
   }
};

class H:public F,public G 
{
    public:
    
     void Subtract()
     {
         cout<<"difference of 2 no.is "<<x-y<<endl;
     }
};

main()
{   
    int choice;
    
    cout<<"***Inhertance Menu***"<<endl;
    cout<<"1.Single inhertance"<<endl;
    cout<<"2.Multiple inheritance"<<endl;
    cout<<"3.Multi-level inheritance"<<endl;
    cout<<"Enter your choice(1/2/3)"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        cout<<"Single inheritance(SUM)"<<endl;
        B ob1;
        ob1.Input1();
        ob1.Sum();
        break;
        
        case 2:
        cout<<"Multiple inheritnace(PRODUCT)"<<endl;
        E ob2;
        ob2.Get_1();
        ob2.Get_2();
        ob2.Product();
        break;
        
        case 3:
        cout<<"Multi-level inheritance(DIFFERENCE)"<<endl;
        H ob3;
        ob3.Data_1();
        ob3.Data_2();
        ob3.Subtract();
        break;
        
        default:
        cout<<"Invalid choice"<<endl;
    }
}