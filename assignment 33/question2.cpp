#include <iostream>
using namespace std;
class Shape
{
protected:
    double a;
    double b;

public:
    void getdata(int a,int b=0)
    {
        this->a=a;
        this->b=b;
    }
    virtual void display_area()
    {
        
    }
   
};
class Trinagle : public Shape
{

public:
    void display_area()
    {
        cout <<"area of trinagle is "<<(a*b)/2<<endl;
    }
};
class Reactangel : public Shape
{
private:

public:
    void display_area()
    {
         
        cout<<"area of reactangle is "<<a*b<<endl;
    }
};
class Radius :public Shape
{
    public:
    void display_area()
    {
         
        cout<<"area of reactangle is "<<3.14*a*a<<endl;
    }
};
int main()
{
    double a;
    cout<<"enter a data "<<endl;
    cin>>a;
    Shape *s;
    Radius r;
    s=&r;
    s->getdata(a);
    s->display_area();
    return 0;
    
}