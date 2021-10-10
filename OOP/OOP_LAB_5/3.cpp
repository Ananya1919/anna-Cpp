#include<iostream>
using namespace std;
class Data
{
	private:
		int x;
		static int funInput ;
		static int funOutput ;
	public:
		void input(); 
		void output();
		void display();
};
int Data::funInput=0;
int Data::funOutput = 0;
	void Data::input()
		{
			
			cout<<"Enter the value of x\n";
			cin>>x;
			funInput++;
		}
		
	void Data::output(){
			
			cout<<"The value of x is "<<x<<endl;
			funOutput++;
		}
		
			void Data::display(){
			cout<<"The input function has been called  "<<funInput<<" times\n";
			cout<<"The output function has been called  "<<funOutput<<" times\n";
		}
int main(){
	Data d;
	d.input();
	d.output();
	d.input();
	d.output();
	d.display();
}