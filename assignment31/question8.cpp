#include <iostream>
using namespace std;
class base
{

    long int phoneno;
    char *Name = new char[10];

public:
    void setname()
    {
        cout << "enter name    :   ";
        cin >> Name;
        cout << endl;
    }
    char *getname()
    {
        return Name;
    }
    void setphoneno()
    {
        cout << "enter phone no   :  ";
        cin >> phoneno;
        cout << endl;
    }
    long int getphoneno()
    {
        return phoneno;
    }
};
class Deposter : public base
{
private:
    long int accountno;
    float balance;

public:
    void setaccountno()
    {
        cout << "enter account no   :  ";
        cin >> accountno;
        cout << endl;
    }
    long int getaccountno()
    {
        return accountno;
    }
    void setbalance()
    {
        cout << "enter balance   :  ";
        cin >> balance;
        cout << endl;
    }
    float getbalance()
    {
        return balance;
    }
};
class Borrower : public Deposter
{
private:
    int loneno;
    int loneammount;

public:
    void setloneno()
    {
        cout << "enter lone no.   :  ";
        cin >> loneno;
        cout << endl;
    }
    int getlontno()
    {
        return loneno;
    }
    void setloneammount()
    {
        cout << "enter lone ammount  : ";
        cin >> loneammount;
        cout << endl;
    }
    int getloneammount()
    {
        return loneammount;
    }
};
int main()
{
    int a;

    cout << "how many customer bank details you want to show ";
    cout << endl;
    cin >> a;
    Borrower *b[a];

    cout << endl;
    int choise;
    while (1)
    {

        cout << "enter your choise ";
        cout << endl;
        cout << "1. enter details" << endl;
        cout << "2. show details" << endl;
        cout << "3. exit" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:

            for (int i = 0; i <a ; i++)
            {
                b[i] = new Borrower;
                cout << "enter details" << endl;
                b[i]->setname();
                b[i]->setphoneno();
                b[i]->setaccountno();
                b[i]->setbalance();
                b[i]->setloneno();
                b[i]->setloneammount();
                cout << " _ _ _ _ _ __ _ _" << endl;
            }

            break;
        case 2:

            cout << " detils of customer " << endl;
            cout << endl;
            for (int i = 0; i < a; i++)
            {
                cout << "  _ __ _ __ __ _ __ _ __ " << endl;
                cout << "customer Name : " << b[i]->getname() << endl;
                cout << "customer phone  no" << b[i]->getphoneno() << endl;
                cout << "customer account no" << b[i]->getaccountno() << endl;
                cout << "customer balance " << b[i]->getbalance() << endl;
                cout << "_ _  _ _ _ __ _ __ _ __ __ " << endl;
                cout << endl;
                cout << "customer lone no" << b[i]->getlontno()<<endl;;
                cout << "customer lone ammount " << b[i]->getloneammount()<<endl;
                cout << "_ _ _ _ _ _ _ _ _ _ _ __ _" << endl;
            }

            break;
        default:
        {
            exit(0);
        }
        }
    }
    return 0;
}