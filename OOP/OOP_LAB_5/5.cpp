#include<iostream>
using namespace std;
class Book
{
	private:
		string bookName, bookAuthor;
		double price;
	
	public:
		Book ()
        {
			
		}
		Book(string n, string a, double p)
		{
			bookName = n;
			bookAuthor = a;
			price = p;
		}
		void setDetails(string n, string a, double p)
		{
			bookName = n;
			bookAuthor = a;
			price = p;
		}
		string getName()
		{
			return bookName;
		}
		string getAuthor()
		{
			return bookAuthor;
		}
		double getPrice()
		{
			return price;
		}
		void printBook()
		{
			cout<<"The book name is\t"<<bookName<<endl;
			cout<<"The book author is\t"<<bookAuthor<<endl;
			cout<<"The book price is\t"<<price<<endl;
		}
	friend void display(int x);
	
};
void display(int x )
{
	string bookName, bookAuthor;
	double price;
	Book arr[x];
	
	for(int i=0; i<x; i++)
	{
		cout<<"Enter the book name\n";
		cin>>bookName;
		cout<<"Enter the author \n";
		cin>>bookAuthor;
		cout<<"Enter the book price\n";
		cin>>price;
		arr[i].setDetails(bookName,bookAuthor,price);
	}
	for(int i=0; i<x; i++)
	{
		cout<<"Details of book "<<(i+1)<<"  are:\n";
		arr[i].printBook();
	}
}
int main()
{
	int x;
	cout<<"Enter the number of books\n";
	cin>>x;
	display(x);
}