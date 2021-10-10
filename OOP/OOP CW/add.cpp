#include <iostream>
using namespace std;
class sum
{
    int a, b;

public:
    int add(int p = 1, int q = 2);
};
inline int sum::add(int p , int q )
{
    a = p;
    b = q;
    return (a + b);
}
int main()
{
    sum m;
    int k, l;
    cin >> k >> l;
    cout << m.add(k, l) << endl;
    return 0;
}