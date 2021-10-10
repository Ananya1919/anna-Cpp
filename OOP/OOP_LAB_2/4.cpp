#include <iostream>
using namespace std;
class complex
{
public:
                int real[10], img[10];
                void input()
                {
                                for (int i = 0; i < 10; i++)
                                {
                                                cout << "Enter the value of " << i + 1 << "number" << endl;
                                                cout << "real part of number ";
                                                cin >> real[i];
                                                cout << "imaganary part of number ";
                                                cin >> img[i];
                                }
                }
                void display()
                {
                                for (int i = 0; i < 10; i++)
                                {
                                                if (img[i] > 0)
                                                {
                                                                cout << real[i] << "+" << img[i] << "i" << endl;
                                                }
                                                else
                                                {
                                                                cout << real[i] << "+" << img[i] << "i" << endl;
                                                }
                                }
                }
};
int main()
{
                complex com;
                cout << "Enter the value of number" << endl;
                com.input();
                cout << "Enterd value is\n";
                com.display();
                return 0;
}