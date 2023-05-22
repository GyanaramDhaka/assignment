#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("E:/programming/chunarikachala.txt",ios::out);
    if(!fout)
    cout<<"file not created "<<endl;
    int i=0;
    while(i<50)
    {
        fout<<"item code"<<endl;
        fout<<"item name "<<endl;
        fout<<"item price "<<endl;
    }
    fout.close();
    return 0;
}