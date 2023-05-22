#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector <int> v={5,6,4,2 };
    vector <int> c;
    c.assign(5,20);
    c.push_back(5);
    v.swap(c);
    cout<<"element in first vector is =="<<endl;
    for(auto f=v.rbegin();f!=v.rend();f++)
    {
        cout<<*f<<endl;
    }
    return 0;
}