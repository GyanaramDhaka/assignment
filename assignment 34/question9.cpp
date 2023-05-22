#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <istream>
using namespace std;
int x;
class employee
{
public:
    int employeeid;
    char employeename[10];
};
int main()
{

    ofstream fout;
    fout.open("E:/programming/employee.txt");
    if (!fout)
        cout << "file not found" << endl;
    ifstream fin;
    fin.open("E:/programming/employee.txt", ios::in);
    if (!fin)
        cout << "file not found " << endl;
    int choise;
    int i;
    string name;
    while (1)
    {
        cout << "enter your choise" << endl;
        cout << "1. for add members" << endl;
        cout << "2. for show detail's of members" << endl;
        cout << "3. for search members" << endl;
        cout << "4. for exit from program" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
        {

            cout << "How much member you want to add" << endl;
            cin >> i;
            x = x + i;
            employee *p[i];
            for (int j = 0; j < i; j++)
            {
                p[j] = new employee;
                cout << "enter employee id  ";
                cin >> p[j]->employeeid;
                cout << endl
                     << "enter employee name";
                cin >> p[j]->employeename;
                cout << endl;
                fout << p[j]->employeeid << endl;
                fout << p[j]->employeename << endl;
            }
        }
        break;
        case 2:
        {

            while (!fin.eof())
            {
                getline(fin, name);
                cout << name;
                cout << endl;
            }
            cout << endl;
        }
        break;
        case 3:
        {
            ifstream faluda;
            faluda.open("E:/programming/employee.txt", ios::in);
            if (!faluda)
                cout << "file not found" << endl;
            char a[10];
            cout << "enter name that you want to find " << endl;
            fflush(stdin);
            gets(a);
            employee m;
            while (!faluda.eof())
            {
                faluda >> m.employeeid;
                faluda >> m.employeename;
                if (!strcmp(m.employeename, a))
                {

                    cout << m.employeeid<<endl;
                    cout << m.employeename<<endl;
                   
                }
                
            }

        }
        break;
        case 4:
        {
            exit(0);
        }
        }
    }
    fin.close();
    fout.close();
    return 0;
}