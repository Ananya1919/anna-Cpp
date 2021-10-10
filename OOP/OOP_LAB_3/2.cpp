 #include <iostream>
 using namespace std;
 class bank
 {
    public :
    string name,type;
    long anum;
    float bal,amt,val,rem; 
    void input()
    {
        cout << "enter the bank details\n-------------------------------" << endl;
        cout << "enter the name of depositor" << endl;
        cin >> name ;
        cout << "enter the account number" << endl;
        cin >> anum;
        cout << "enter the type of account" << endl;
        cin >> type;
        cout << "enter the amount present in the account" << endl;
        cin >> bal;
    }
    void deposit()
    {
        cout << "enter an amount to be deposited" << endl; 
        cin >> amt ;
        bal = bal + amt;
        cout << "the total amount present in the bank is: " << bal << endl;
    }
    void withdraw()
    {
        cout << "enter an anount to be withdrawn: " << endl;
        cin >> val;
        if(val > bal)
        {
            cout << "this amount cant be withdrawn: " << endl;
        }
        else
        {
            rem = bal-val ;
            cout << "the remaining amount in bank is: "  << rem << endl;
        }
    }
    void display()
    {
        cout << "the name of bank holder is:\t" << name << endl;
        cout << "the remaining balance in account is:\t" << rem << endl;
    }
 };
 int main()
 {
    bank obj;
    obj.input();
    obj.deposit();
    obj.withdraw();
    obj.display();
    return 0;
 }