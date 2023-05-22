#include <iostream>
#include <vector>
using namespace std;
int main()
{
    
    vector <int> v;
    cout<<"size and capacity of vectory is =="<<endl;
    cout<<v.size()<<"  "<<v.capacity()<<endl;
    v.insert(v.begin(),5);
    v.assign(5,10);
    v.push_back(3);
    cout<<"after inserting element in vector --"<<endl;
    for(int i=0;i<v.size();i++)
    {
            cout<<v.at(i)<<endl;
    }
    cout<<"size and capacity of vectory is =="<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    return 0;
}