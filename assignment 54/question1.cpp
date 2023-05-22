#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int>v={4,6,7,9};
    for(auto x =v.rbegin();x!=v.rend();x++)
    {
        cout<<*x<<endl;
    }
    return 0;
}