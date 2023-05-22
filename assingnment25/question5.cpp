#include <iostream>
#include <conio.h>
using namespace std;
class reverse
{
private:
    int a, b;

public:
    void reversenumber(int x)
    {
        b = x;
        while (b > 0)
        {
            a = b % 10;
            cout<< a;
            b = b / 10;
        }
    }
};
int main()
{
    int x;
    reverse re;
    cout << "enter a number ";
    cin >> x;
    re.reversenumber(x);
    getch();
}