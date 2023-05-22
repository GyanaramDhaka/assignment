#include <iostream>
using namespace std;
class Numbers
{
private:
    int x, y, z;

public:
    void setdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void showdata()
    {
        cout << "value of x is =" << x << endl;
        cout << "value of y is =" << y << endl;
        cout << "value of z is =" << z << endl;
    }
    friend Numbers operator-(Numbers N);
};
Numbers operator-(Numbers N)
{

    Numbers Temp;
    Temp.x = -(N.x);
    Temp.y = -(N.y);
    Temp.z = -(N.z);
    return Temp;
}
int main()
{
    Numbers N1;
    N1.setdata(5, 6, 7);
    N1.showdata();
    cout << "after calling - operator " << endl;
    (-N1).showdata();
    return 0;
}