#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    string name;
    ifstream fin;
    fin.open("E:/programming/radha.txt",ios::in);
    if(!fin)
    {
        cout<<"file not opened ";
    }
    int i=1;
    char ch;
    while(!fin.eof())
    {
       fin>>ch;
       //because in starting he pointing first character
       i++;
    }
    fin.close();
    cout<<"no. of character in file"<<": "<<i<<endl;
    return 0;
}