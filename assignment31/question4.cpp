#include <iostream>
using namespace std;
class person
{
private:
    int phoneno;
    char *address = new char[10];
    char *Name = new char[10];

public:
    int getphoneno()
    {
        cout << "enter phone no.  :  ";
        cin >> phoneno;
        cout << endl;
        return phoneno;
    }
    char *getaddress()
    {
        cout << "enter address  :  ";
        cin >> address;
        cout << endl;
        return address;
    }
    char *getName()
    {
        cout << "enter Name    :   ";
        cin >> Name;
        cout << endl;
        return Name;
    }
};
class empolyee : public person
{
    int eno;

public:
    int geteno()
    {
        cout << "enter eno.   :   ";
        cin >> eno;
        cout << endl;
        return eno;
    }
};
class manager : public empolyee
{
private:
    float basicsalary;
    char *designation = new char[10];
    char *department = new char[10];
    float maxsalary;

public:
    void setsalary()
    {
        cout << "enter basic salary  :   ";
        cin >> basicsalary;
        
    }
    float getsalary()
    {
        return basicsalary;
    }
    char *getdepartment()
    {
        cout << "enter department   :   ";
        cin >> department;
        cout << endl;
        return department;
    }
    char *getdisignation()
    {
        cout << "enter designation  :   ";
        cin >> designation;
        cout << endl;
        return designation;
    }
    void getmaxsalary(manager *m)
    {
        if (this->getsalary() > m->getsalary())
        {
            cout << "Manager with highest salary is :" << this->getsalary();
            
        }
        else
        {
            cout << "Manager with highest salary is :" << m->getsalary();
            
        }
    }
};
int main()
{
    int a;
    cout << "How many manager your want to enter :  ";
    cin >> a;
    cout << endl;
    cout << endl;
    manager *m[2];
    for (int i = 0; i < 2; i++)
    {
        m[i] = new manager;
        cout << "enter details of manager  :  " << endl;
        m[i]->geteno();
        m[i]->getName();
        m[i]->getaddress();
        m[i]->getphoneno();
        m[i]->getdisignation();
        m[i]->getdepartment();
        m[i]->setsalary();
        m[i]->getsalary();
        cout<<endl;
        cout << "_ _ _ _ _ _ _ _ _  _" << endl;
    }
    m[1]->getmaxsalary(m[2]);
    return 0;
}