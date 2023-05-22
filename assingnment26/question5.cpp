#include <iostream>
using namespace std;
class Complex 
{
    private:
    int a;
    int b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"real  ="<<a<<" imagi  = "<<b<<endl;
    }
    Complex add(Complex &c)
    {
       Complex temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return temp;
    }
};
int main()
{
    Complex c1;
    Complex c2;
    c1.setdata(4,6);
    c2.setdata(6,4);
    c1.showdata();
    c2.showdata();
    Complex c3;
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}