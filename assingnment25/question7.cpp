#include <iostream>
#include <conio.h>
using namespace std;
class gretest
{
private:
    int a, b, c, x;

public:
    void setdata()
    {
        cout << "enter three numbers"
             << " " << endl;
        cin >> a;
        cin >> b;
        cin >> c;
    }
    void gretestnumber()
    {
        if (a > b)
        {
            if (b > c)
                x = a;
        }
        else if (b > c)
            x = b;
        else
            x = c;
        cout << "gretest number is =" << x << endl;
    }
};
int main()
{
    gretest number;
    number.setdata();
    number.gretestnumber();
    getch();
}