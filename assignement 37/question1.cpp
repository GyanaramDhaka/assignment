#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> vr={2,5,6,3,6,0,7};
    cout<<"size of vector and capacity is =="<<endl;
    cout<<vr.size()<<endl;
    cout<<vr.capacity()<<endl;
    cout<<"element in vector is =="<<endl;

    for(int i=0;i<vr.size();i++)
    {
         cout<<vr.at(i);
    }
    return 0;
}