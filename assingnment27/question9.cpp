#include <iostream>
#include <cstring>
using namespace std;
class Mystring
{
private:
    char str[100];

public:
    void setvalue()
    {
        cout << "enter a string " << endl;
        gets(str);
    }
    void showdata()
    {
        cout << "entered string " << endl;
        puts(str);
    }
    friend Mystring operator!(Mystring m);
};
Mystring operator!(Mystring m)
{
    Mystring God;
    int size = strlen(m.str);
    int temp;
    for (int i = 0; i <size ; i++)
    {
        if (m.str[i] > 'A' && m.str[i] < 'Z')
        {
            God.str[i]='m.str[i]'-'26';
        }
        else
        {
            God.str[i]='m.str[i]'+'26';
        }
    }
    return God;
}
int main()
{
    Mystring m1;
    m1.setvalue();
    m1.showdata();
    m1 = !m1;
    m1.showdata();
    return 0;
}