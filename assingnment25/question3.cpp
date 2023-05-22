#include <iostream>
#include <conio.h>
using namespace std;
class factorial
{
private:
    int a;

public:
    int findfactorial(int x)
    {
        if (x>1)
        {
           a=x*findfactorial(x-1);
           return a;
        }
        else
        {
            return 1;
        }
    }
    void getter(int y)
    {
        cout << "factorial of x is =" << y << endl;
    }
};
int main()
{
    int x;
    int y;
    factorial f1;
    cout << "enter a number";
    cin >> x;
    y = f1.findfactorial(x);
    f1.getter(y);
    getch();
}