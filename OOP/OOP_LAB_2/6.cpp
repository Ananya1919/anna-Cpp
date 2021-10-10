#include<iostream>
using namespace std;

class emplo
{
	public:
	string Name;
	int id, Age;
	double salary;
	emplo() {};
	emplo(int i, string n, int a, double s)
	{
		Name = n;
		id = i;
		Age = a;
		salary = s;
	}
};

int main(){
	int n = 0;
	
	cout << "Enter Number of employes: ";
	cin >> n;

	int id, age;
	double salary;
	double gross[n];
	string name;
	emplo emp[n];
	
	for(int i = 0; i < n; i++)
	{
		cout << "Enter id:\t";
		cin >> id;
	
		cout << "Enter name:\t";
		cin >> name;
	
		cout << "Enter age:\t";
		cin >> age;
	
		cout << "Enter salary:\t";
		cin >> salary;
	
		emp[i] = emplo(id, name , age, salary);
	
		cout << "\n";
	}
	
	for(int i = 0; i < n; i ++){
		double da = 0.80 * emp[i].salary;
		double hra = 0.10 * emp[i].salary;
		gross[i] = emp[i].salary + da + hra;
	}
	
	cout << "Id\tName\tAge\tSalary\tGross_salary\n";
	
	for(int i=0;i<n ;i++)
    {
		cout << emp[i].id << "\t" << emp[i].Name << "\t" << emp[i].Age << "\t" << emp[i].salary << "\t" << gross[i] << endl;
	}
	
	return 0;
}