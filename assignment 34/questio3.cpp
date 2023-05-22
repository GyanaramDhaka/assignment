#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    ofstream fout;
    ifstream fin;
    fin.open("E:/programming/radha.txt",ios::in);
    if(!fin)
    cout<<"file not found"<<endl;
    while(!fin.eof())
    {
        getline(fin,name);
    }
    cout<<name;
    fin.close();
    fout.open("E:/programming/radha.txt",ios::app);
    if(!fout)
    cout<<"file not found"<<endl;
    getline(cin,name);
    fout<<endl;
    fout<<name;
    fout.close();
    return 0;
}