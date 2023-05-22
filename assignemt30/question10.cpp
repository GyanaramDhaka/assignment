#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[10];
    cout << "enter Nick name  " << endl;
    gets(a);
    try
    {
        if (strlen(a) > 8)
            throw "chota nam nhi ho sakta";
        for (int i = 0; i < 10; i++)
        {
            if(isdigit(a[i]))
           {
                throw i;
           }
           
          if(a[i]>47&&a[i]<57)
            throw exception();
            if(a[i]>64&&a[i]<90)
            throw exception();
            if(a[i]>97&&a[i]<122)
            throw exception();
        }
        
    }
    catch (const char *p)
    {
        cout<<"it is not a nick name "<<endl;
        
        
    }
    catch(int i)
    {
        cout<<"it is not a nick name1 "<<endl;
    }
    catch(...)
    {
        cout<<"it is not a nick name2  "<<endl;
    }
    cout<<"hii gyanaram dhaka"<<endl;
    return 0;
}