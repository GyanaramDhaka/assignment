#include <iostream>
using namespace std;
class person
{
protected:
    char *Name;
    int age;

public:
    person() : Name("laddu"), age(0)
    {
    }
    void setage(int a)
    {
        this->age = a;
    }
    void setName(char *p)
    {
        this->Name = p;
    }
    int getage()
    {
        return age;
    }
    char *getName()
    {
        return (Name);
    }
};
class employee : public person
{
private:
    float salary;
    int impid;

public:
    void setsalary(float x)
    {
        salary = x;
    }
    void setimpid(int a)
    {
        impid = a;
    }
    float getsalary()
    {
         return salary;
    }
    int getimpid()
    {
        return impid;
    }
};
int main()
{
    person *p;
    p = new person;

    employee *I;
    I = new employee;
    I->setage(29);
    I->setName("gyanaram dhaka");
    cout << "employee name " << I->getName() << endl;
    cout << "employee age" <<"  " <<I->getage() << endl;
    I->setimpid(1234);
    I->setsalary(800);
    cout << "employee id" <<"  " <<I->getimpid() << endl;
    cout << "employee salary" << ""<<I->getsalary() << endl;
    return 0;
}