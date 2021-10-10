#include <iostream>
using namespace std;
class mammals
{
    public :
    void output()
    {
        cout << "I am a mammal" << endl;
    }
};
class marine_animals
{
    public:
    void output()
    {
        cout << "I am a marine animal" << endl;
    }
};
class blue_whale : public mammals , public marine_animals
{
    public :
    void output()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};
int main()
{
    mammals M;
    marine_animals MA;
    blue_whale BW;
    M.output();
    MA.output();
    BW.output();
    BW.mammals::output();
    BW.marine_animals::output();
    return 0;
}