#include <iostream>
#include <conio.h>
#define PI 3.14
using namespace std;
class area
{
private:
    int a, b;

public:
    
    void setdata(int x, int y=0)
    {
        a = x;
        b = y;
    }
    void areaofcircle()
    {
        cout << "area of circle" <<" "<<PI * a * a << endl;
    }
    void areaofsquare()
    {
        cout << "area of square is" <<" "<< a * a << endl;
    }
    void areaofreactangel()
    {
        cout << "area of reactangle is " <<" "<< a * b << endl;
    }
};
int main()
{
    int m, n, c = 1;
    area a;
    int choise;
    while (c)
    {
        cout << "enter your choise " << endl;
        cout << "1: calculate area of circle " << endl;
        cout << "2: calculate area of square " << endl;
        cout << "3: calculate area of reactanle " << endl;
        cout << "4: exit"<<endl;;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "enter radius " << endl;
            cin >> m;
            a.setdata(m);
            a.areaofcircle();
            break;
        case 2:
            cout << "enter length of square" << endl;
            cin >> m;
            a.setdata(m);
            a.areaofsquare();
            break;
        case 3:
            cout << "enter length and breath of a reactangle " << endl;
            cin >> m >> n;
            a.setdata(m, n);
            a.areaofreactangel();
            break;
        default:
            exit(0);
            c=0;
        }
    }

    getch();
}