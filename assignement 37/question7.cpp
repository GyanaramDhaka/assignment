#include<iostream>
#include<vector>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v={1,3,5,6};
    vector <int>a={2,6,9,5};
    cout<<"first vector's element is =="<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i);
    }
    cout<<"second vector's element is =="<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<a.at(i);
    }
    vector <int> ::iterator at,it;
    vector <int> gamma;
    int alpha=sizeof(v);
    int bita=sizeof(a);
    at =set_intersection(v.begin(),v.end(),a.begin(),a.end(),gamma.begin());
    cout<<"after intersection "<<endl;
    for(int j=0; j<=gamma.size()  ; j++)
    {
        cout<<gamma[j]<<endl;

    }
    return 0;
}
