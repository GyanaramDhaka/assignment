#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:/programming/radha.txt",ios::trunc);
    try
    {
        if(!fout)
        {
            throw "lund lelo";
        }
        cout<<" file created succesfully";
        fout<<"Hii gyanaram dhaka welcome";
    }
    catch(...)
    {
        cout<<"file not created ";
    }
    fout.close();
    return 0;
}