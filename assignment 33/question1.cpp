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
int main()
{
    Shape *s;
    Trinagle t;
    Reactangel r;
    double a,b;
    cout<<"enter two for a and b"<<"  "<<endl;
    cin>>a>>b;
    s = &r;
    s->getdata(a,b);
    s->display_area();
    s=&t;
    s->getdata(a,b);
    s->display_area();
    return 0;
}