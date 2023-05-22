#include <iostream>
using namespace std;
class Bank
{
   private:
   float roi;
   int p;
   int t;
   public:
   void rulesofbank()
   {
        cout<<"rate of interest is ="<<5;
        cout<<endl;
        cout<<" "<<"if you didn't pay money on time we will sell your things ";
   }
   Bank(int x,int y)
   {
    p=x;
    t=y;
   }
    void simpleintrest()
    {
        roi=(p/100)*t*5;
        cout<<endl;
        cout<<roi;
    }
   
};
int main()
{
    int a,b;
    cout<<"enter your price   =  ";
    cin>>a;
    cout<<"enter your year  = " ;
    cin>>b;
    Bank b1(a,b);
    b1.rulesofbank();
    b1.simpleintrest();

}