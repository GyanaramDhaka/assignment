#include <iostream>
using namespace std;
class employee
{
private:
    int employeecode;
    char *Name = new char[10];

public:
    void setemployeecode()
    {
        cout << "enter employeecode " << endl;
        cin >> employeecode;
        cout << endl;
    }
    void setemployeename()
    {
        cout << "enter employee name " << endl;
        cin >> Name;
        cout << endl;
    }
    int getemployeecode()
    {
        return employeecode;
    }
    char *getemployeename()
    {
        return Name;
    }
};
class employment : public employee
{
private:
    int dailyrate;
    int days;
    int salary;
    char *status = new char[10];

public:
    void setdailyrate()
    {
        cout << "enter dailyrate" << endl;
        cin >> dailyrate;
        cout << endl;
    }
    int getdailyrate()
    {
        return dailyrate;
    }
    void setdays()
    {
        cout << "enter how many days you work" << endl;
        cin >> days;
        cout << endl;
    }
    int getdays()
    {
        return days;
    }

    int getsalary()
    {
        return this->dailyrate * this->days;
    }
    void setstatus()
    {
        cout << "enter your staus " << endl;
        cin >> status;
        cout << endl;
    }
    char *getstatus()
    {
        return status;
    }
};
class jobseekers : public employee
{
private:
    int hourlyrate;
    int noofhours;
    int salary;
    char *status = new char[10];

public:
    void sethourlyrate()
    {
        cout << "enter hourlyrate" << endl;
        cin >> hourlyrate;
    }
    int gethourlyrate()
    {
        return hourlyrate;
    }
    void setnoofhours()
    {
        cout << "enter no. of hour you work" << endl;
        cin >> noofhours;
    }
    int getnoofhours()
    {
        return noofhours;
    }
    int getsalary()
    {
        return this->noofhours * this->hourlyrate;
    }
    void setstatus()
    {
        cout << "enter your staus " << endl;
        cin >> status;
        cout << endl;
    }
    char *getstatus()
    {
        return status;
    }
};
int main()
{
    int i;
    cout << "how many employee you want to enterd" << endl;
    cin >> i;
    int choise;
    employment d;
    jobseekers j;
    while (i)
    {
        cout << "1.  enter record " << endl;
        cout << "2.  display record " << endl;
        cout << "3.  search record  " << endl;
        cout << "4.  quit " << endl;
        cout << "enter your choise " << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
        {

            d.setemployeecode();
            d.setemployeename();
            d.setdailyrate();
            d.setdays();
            d.setstatus();

            j.setemployeecode();
            j.setemployeename();
            j.sethourlyrate();
            j.setnoofhours();
            j.setstatus();
        }
        break;
        case 2:
        {
            cout<<"employee detail  :  "<<endl;
            cout << " employee code   : " << d.getemployeecode() << endl;
            cout << " employee name   : " << d.getemployeename() << endl;
            cout << " employee salary : " << d.getsalary() << endl;
            cout << " employee status : " << d.getstatus() << endl;
            cout<<"employee detail  :  "<<endl;
            cout << " employee code   : " << j.getemployeecode() << endl;
            cout << " employee name   : " << j.getemployeename() << endl;
            cout << " employee salary : " << j.getsalary() << endl;
            cout << " employee status : " << j.getstatus() << endl;
        }
        break;
        case 3:
        {
            int i;
            cout << "enter code " << endl;
            cin >> i;
            if (i == d.getemployeecode())
            {
                cout << "yes this employee is persent in our company" << endl;
                cout << "employee details are this" << endl;
                cout << " employee code   : " << d.getemployeecode() << endl;
                cout << " employee name   : " << d.getemployeename() << endl;
                cout << " employee salary : " << d.getsalary() << endl;
                cout << " employee status : " << d.getstatus() << endl;
            }
            else if (i == j.getemployeecode())
            {

                cout << "yes this employee is persent in our company" << endl;
                cout << "employee details are this" << endl;
                cout << " employee code   : " << j.getemployeecode() << endl;
                cout << " employee name   : " << j.getemployeename() << endl;
                cout << " employee salary : " << j.getsalary() << endl;
                cout << " employee status : " << j.getstatus() << endl;
            }
            else 
            {
                cout<<"this is not present in company"<<endl;
            }
        }
        break;
        default:
            exit(0);
        }
        i++;
    }
    return 0;
}