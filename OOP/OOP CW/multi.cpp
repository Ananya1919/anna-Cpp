#include <iostream>
using namespace std;
class multiply
{
    int a, b, c, d;

public:
    int product(int p = 1, int q = 2, int r = 3, int s = 4);
};
int multiply::product(int p , int q , int r, int s)
{
    a = p;
    b = q;
    c = r;
    d = s;
    return a * b * c * d;
}
int main()
{
    multiply m;
    int k, l;
    cin >> k >> l;
    cout << m.product(k, l) << endl;
    cout << m.product() << endl;
    return 0;
}