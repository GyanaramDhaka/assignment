#include <iostream>
using namespace std;
class dollar 
{
   float d;
   public:
   dollar(float n)
   {
    d=n;
    cout<<"pc called for dollar "<<endl;
   }
   float getd()
   {
    return d;
   }
   void display()
   {
    cout<<d<<endl;
   }
};
class rupee 
{
float r;
public:
rupee(float n)
{
    r=n;
    cout<<"pc called for rupee"<<endl;
}
rupee(dollar d)
{
    r=d.getd()*100;
}
void display()
{
    cout<<r<<endl;
}
};
int main()
{
    float a=10;
    float b=20;
    dollar d=a;
    rupee r=b;
    d.display();
    r.display();
    cout<<"teri maa ka bhosda"<<endl;
    r=(rupee)d;
    r.display();
    return 0;
}