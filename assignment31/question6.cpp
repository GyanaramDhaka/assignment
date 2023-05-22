#include <iostream>
using namespace std;
class A
{
private:
    int a;
    int b;

public:
    friend int sum();
};
class B
{
private:
    int c;

public:
    friend int sum();
   
};
int   sum ()
{
    A aclass;
    B bclass;
   cout<<"enter two numbers" <<endl;
   cin>>aclass.a>>aclass.b;
   bclass.c=aclass.a+aclass.b;
   cout<<"sum of these numbers is "<<bclass.c;
   return bclass.c;
}
int main()
{
    sum();
    return 0;
}