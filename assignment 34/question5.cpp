#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    ofstream fout;
    fout.open("E:/programming/radha.txt",ios::app);
    if(!fout)
    cout<<"file not found"<<endl;
    ifstream fin;
    fin.open("E:/programming/radhakichunari.txt",ios::in);
    if(!fout)
    cout<<"file not found "<<endl;
    cout<<"content in second file is : "<<endl;
    while(!fin.eof())
    {
        getline(fin,name);
        cout<<name;
        fout<<endl;
        fout<<name;

    }
    cout<<"content write succesfully"<<endl;
    fout.close();
    fin.close();
    return 0;
}