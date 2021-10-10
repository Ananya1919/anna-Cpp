#include <iostream>
using namespace std;
class square_cube
{
    public:
    int n;
    int square(int n1=4);
    int cube(int n2=5);
};
inline int square_cube ::square(int n1)
{   
    n=n1;
    int sq = n*n;
    cout << "the square is :" << endl;
    return sq;
}
inline int square_cube :: cube (int n2)
{
    n=n2;
    int c = n*n*n;
    cout <<"the cube is: "<< endl;
    return c;
}
int main()
{
    square_cube o;
    int n2;
    cout <<"enter the number whose square and cube has to be found" << endl;
    cin >> n2;
    cout<< o.square(n2) << endl;
    cout<< o.cube(n2) << endl;
    return 0;
}