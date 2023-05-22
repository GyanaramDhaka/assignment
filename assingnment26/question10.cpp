#include <iostream>
using namespace std;
class staticcount
{
    public:
   static int x;
   void countnumber()
   {
       ++x;
   }
};
int staticcount::x;
int main()
{
    staticcount s2;
    int i=1;
    while(i<4)
    {   

        s2.countnumber();
        cout<<"after"<<i<<"call"<<endl;
        cout<<staticcount::x<<endl;
        i++;
    }
    return 0;
}