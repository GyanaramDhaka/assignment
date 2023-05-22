#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector <int>v1={8,78,45,7,4};
    vector <int>v2={8,4,90,45,56};
    cout<<"first vector's element is =="<<endl;
    for(auto i=v1.begin();  i !=v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"second vector's element is =="<<endl;
    for(auto i=v2.begin();  i !=v2.end();i++)
    {
        cout<<*i<<" ";
    }
    sort(v1.begin(),v1.begin()+v1.size());
    sort(v2.begin(),v2.begin()+v2.size());
   cout<<endl;
   cout<<"first vector's element is =="<<endl;
    for(auto i=v1.begin();  i !=v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"second vector's element is =="<<endl;
    for(auto i=v2.begin();  i !=v2.end();i++)
    {
        cout<<*i<<" ";
    }
    reverse(v1.begin(),v1.begin()+v1.size());
    reverse(v2.begin(),v2.begin()+v2.size());
     cout<<endl;
   cout<<"first vector's element is =="<<endl;
    for(auto i=v1.begin();  i !=v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"second vector's element is =="<<endl;
    for(auto i=v2.begin();  i !=v2.end();i++)
    {
        cout<<*i<<" ";
    }
    vector <int >  v3;
    vector <int> ::iterator it,at;
    cout<<"now we find common element in between these two vectors"<<endl;
    it=set_intersection(v1.begin(),v1.begin()+v1.size(),v2.begin(),v2.begin()+v2.size(),v3.begin());
    cout<<"these are the =="<<endl;
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3.at(i)<<"  ";
    }
    return 0;
}
