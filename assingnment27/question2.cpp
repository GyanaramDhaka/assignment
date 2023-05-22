#include <iostream>
#include <ostream>
using namespace std;
class Integer
{
private:
int x;
public:
Integer(int a )
{
    cout<<"parameterized consuctor called "<<endl;
    x=a;
}
Integer()
{
    x=0;
}
void    operator ++(int useless )
{
 
    x=x+1;
}
void   operator --(int useless )
{
    x=x-1;
   
}

friend ostream &operator<<(ostream &,Integer );
};
ostream& operator<<(ostream &os, Integer I)
{
    cout<<I.x<<endl;
    return os;
}
int main()
{
    int a;
    cout<<"enter a number "<<endl;
    cin>>a;
    Integer I1(a);
    cout<<I1;
    cout<<"after calling increment operator "<<endl;
    cout<<"value of x of I1 object ="<<endl;
    I1++;
    cout<<I1;
    cout<<"after calling decreament operator "<<endl;
    cout<<"value of xof I1 object   ="<<endl;
    I1--;
    cout<<I1;
    return 0;

    
}