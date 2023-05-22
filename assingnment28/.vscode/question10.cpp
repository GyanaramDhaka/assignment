#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance(int a, int b)
    {
        feet = a;
        inches = b;
    }
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    void operator()(int a,int b, int c)
    {
        feet=a+c+5;
        inches=a+b+15;
    }
    friend ostream& operator<<(ostream &,Distance);
};
ostream & operator<<(ostream &os,Distance p)
{
    cout<<p.feet<<endl;
    cout<<p.inches<<endl;
    return os;

}    
int main()
{
    Distance d1;
    Distance d2(5,6);
    d1(10,20,30);
    cout<<d1<<d2;
    return 0;
    
}