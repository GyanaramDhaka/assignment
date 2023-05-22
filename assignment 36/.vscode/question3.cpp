#include <iostream>
#include <istream>
#include <array>
using namespace std;
array <int, 5>ar;
int elementatindex(int index)
{
    if(index >ar.size())
    {
        cout<<"memory does not exit "<<endl;
    }
    int i=0;
   i= ar.at(index);
   return i;
}
int main()
{

  for(int i=0;i<ar.size();i++)
  {
    ar[i]=i;
  }
  //cout<<"first element is ="<<endl;
  //cout<<ar.front();
  //cout<<"last element is ="<<endl;
  //cout<<ar.back();
  int x=0;
  cout<<"enter a index to excess that index value "<<endl;
  cin>>x;
  
  int j=elementatindex(x);
  cout<<"that value is =="<<j<<endl;
  return 0;
}