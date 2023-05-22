#include <iostream>
using namespace std;
class Cube 
{
    private:
    int v;
    public:
    Cube(int a)
    {
       v=a;

    }
    void volume ()
    {
        cout<<"volume of cube is ="<<v*v*v<<endl;
    }

};
int main()
{
    Cube c1(6);
    c1.volume ();
    return 0;
}
