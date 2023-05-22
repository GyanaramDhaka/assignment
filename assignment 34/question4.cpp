#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream fin;
    string file1;

    fin.open("E:/programming/radha.txt", ios::in);
    if (!fin)
        cout << "file not found" << endl;
    ofstream fout;
    fout.open("E:/programming/radhakichunari.txt");
    if (!fout)
        cout << "file not created " << endl;
    cout << "content in file 1 is :" << endl;
    while (!fin.eof())
    {
        getline(fin, file1);
        cout << file1;
        fout<<file1;
    }
    
 
    fin.close();
    return 0;
}