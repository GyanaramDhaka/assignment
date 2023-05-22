#include <iostream>
using namespace std;
class Integer
{
  private:
  int x;
  public:
 
   friend Integer operator!(Integer );
  void operator=(int a )
  {
    x=a;
  }
  void display()
  {
    cout<<"value of x is ="<<x<<endl;
  }
};
Integer operator!(Integer p)
{
    Integer Temp;
    Temp.x=!(p.x);
    return Temp;
}
int main()
{
    Integer I1;
    I1=5;
    I1.display();
    I1=!(I1);
    cout<<"after calling ! operator "<<endl;
    I1.display();
    return 0;
}