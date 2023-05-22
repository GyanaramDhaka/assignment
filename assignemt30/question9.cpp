#include <iostream>
using namespace std;
int main()
{
    char gmail[20];
    cout<<"enter your gmail id :"<<endl;
    gets(gmail);
    try 
    {
        for(int i=0;i<20;i++)
        {
         if(gmail[i]!='@')
         {
            throw "impossible";
         }
        }
    }  
    catch(const char *p)
    {
        cout<<p<<endl;
    }
    cout<<"hii gyanaram dhaka"<<endl;
    return 0;
}