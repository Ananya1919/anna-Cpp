#include <iostream>
using namespace std;
class train
{
protected:
int seat_1tier;
int seat_2tier;
int seat_3tier;
public:
train()
{
seat_1tier = 20;
seat_2tier = 30;
seat_3tier = 40; }
};
class reservation : protected train
{
int booked1tier;
int booked2tier;
int booked3tier;
public:
reservation()
{
booked1tier = 0;
booked2tier = 0;
booked3tier = 0; }
void book()
{
int ch = 0, n;
cout << "1 tier:" << seat_1tier - booked1tier << " seats are available" <<
endl;
cout << "2 tier:" << seat_2tier - booked2tier << " seats are available" <<
endl;
cout << "3 tier:" << seat_3tier - booked3tier << " seats are available" <<
endl;
cout << "Enter the number of tickets you want:";
cin >> n;
cout << "Enter the tier:";
cin >> ch;
if (ch == 1) {
if (booked1tier + n > seat_1tier) {
cout << "Only " << seat_1tier - booked1tier << " will be booked" <<
endl; }
char choice = 'y';
cout << "press y for confirmation:";
cin >> choice;
if (choice == 'y')
{
cout << "booking confirmed" << endl;
booked1tier += n; }
else
{
cout << "Thanks for visiting :)" << endl; } }
else if (ch == 2) {
if (booked2tier + n > seat_2tier) {
cout << "Only " << seat_2tier - booked2tier << " will be booked" <<
endl; }
char choice = 'y';
cout << "press y for confirmation:";
cin >> choice;
if (choice == 'y')
{
cout << "booking confirmed" << endl;
booked2tier += n; }
else
{
cout << "Thanks for visiting :)" << endl; } }
else
{
if (booked3tier + n > seat_3tier) {
cout << "Only " << seat_3tier - booked3tier << " will be booked" <<
endl; }
char choice = 'y';
cout << "press y for confirmation:";
cin >> choice;
if (choice == 'y')
{
cout << "booking confirmed" << endl;
booked3tier += n; }
else
{
cout << "Thanks for visiting :)" << endl; } } }
void cancel()
{
int n;
cout << "How many tickets you would like to cancel?";
cin >> n;
int ch;
cout << "Which tier?";
cin >> ch;
char choice;
switch (ch) {
case 1:
if (booked1tier - n < 0) {
cout << "only " << booked1tier << " will be cancelled" << endl; }
cout << "press y for confirmation:";
cin >> choice;
if (choice == 'y')
{
cout << "cancelation confirmed" << endl;
booked1tier -= n; }
else
{
cout << "Thanks for visiting :)" << endl; }
break;
case 2:
if (booked2tier - n < 0) {
cout << "only " << booked2tier << " will be cancelled" << endl; }
cout << "press y for confirmation:";
cin >> choice;
if (choice == 'y')
{
cout << "cancelation confirmed" << endl;
booked2tier -= n; }
else
{
cout << "Thanks for visiting :)" << endl; }
break;
case 3:
if (booked3tier - n < 0) {
cout << "only " << booked3tier << " will be cancelled" << endl; }
cout << "press y for confirmation:";
cin >> choice;
if (choice == 'y')
{
cout << "cancelation confirmed" << endl;
booked3tier -= n; }
else
{
cout << "Thanks for visiting :)" << endl; }
break; } }
};
int main()
{
reservation r; r.book();
r.cancel();
return 0; }