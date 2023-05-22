#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int employeeid;
char employeename[10];
int main()
{
    ofstream fout;
    fout.open("E:/programming/employee.txt");
    if (!fout)
        cout << "file not created" << endl;
    fout << "employee detail's are here" << endl;
    int choise;
    while (1)
    {
        cout << "enter your choise" << endl;
        cout << "1.add member" << endl;
        cout << "2.read member" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            cout << "Enter employee id ";
            cin >> employeeid;
            cout << endl;
            cout << "Enter employee name";
            cin >> employeename;
            fout << endl;
            fout << "employee id"
                 << "  " << employeeid << endl;
            fout << "employee name "
                 << "  " << employeename << endl;
            fout << endl;
        }
        break;
        case 2:
        {
            ifstream fin;
            fin.open("E:/programming/employee.txt", ios::in);
            if (!fin)
                cout << "file not found" << endl;
            fin.close();
        }
        break;
        default:
            fout.close();
            exit(0);
        }
    }
    return 0;
}