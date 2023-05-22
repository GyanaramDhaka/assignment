#include <iostream>
using namespace std;
class complex 
{
   int a;
   public:
   //complex(int n)
   //{
      //a=n;
   //}
   complex(){}
   void display()
   {
    cout<<"value of a of complex is ="<<a<<endl;
   }
   void operator=(int n)
   {
        a=n;
   }
};
int main()
{
    complex c;
    int x;
    cout<<"enter a number "<<endl;
    cin>>x;
    c=x;
    c.display();
    return 0;
}