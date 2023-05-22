#include <iostream>
using namespace std;
class Array 
{
    private:

   char a[10];
   public:
   int operator[](int index)
   {
        if(index>10)
       { cout<<"envalid excess ";
        exit(0);}
        else 
        {
            return a[index];
        }
   }
};
int main()
{
    Array a1;
    cout<<"enter a number "<<endl;
    int x;
    cin>>x;
    cout<<a1[x];
    return 0;
}