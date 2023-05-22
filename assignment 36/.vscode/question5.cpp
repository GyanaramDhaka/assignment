#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    array <int,5>ar={1,4,9,5,3};
    int *it;
    cout<<"all the element of the array is=="<<endl;
    for(it=ar.begin(); it <= ar.end(); it++)
    {
         cout<<*it<<"  "<<endl;
    }
    sort(ar.rbegin(),ar.rend());
    cout<<"after sorting in desending order "<<endl;
     for(it=ar.begin(); it <= ar.end(); it++)
    {
         cout<<*it<<"  "<<endl;
    }
    return 0;
    
}