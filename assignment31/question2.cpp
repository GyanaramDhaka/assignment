#include <iostream>
using namespace std;
class base
{
private:
    int a;
    int b;

public:
    void setvalue(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int geta()
    {
        return a;
    }
    int getb() { return b; }
};
class derived : public base
{
private:
    int c;

public:
    int  sum(int a,int d)
    {
        this->setvalue(a,d);
        c=(this->geta()+ this->getb());
        return c;
    }
};

int
main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    derived  *d;
    d=new derived;
    
    cout<<"sum is ="<<d->sum(a,b)<<endl;
    return 0;
}