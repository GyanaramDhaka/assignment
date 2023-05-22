#include <iostream>
using namespace std;
class invent1
{
    int a;
    int b;

public:
    invent1(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    operator float()
    {
        return (a + .0);
    }
    invent1() {}
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    void display()
    {
        cout << "value of a of invent1 is " << a << endl;
        cout << "value of b of invent1 is " << b << endl;
    }
};
class invent2
{
    int a;
    int b;

public:
    invent2()
    {
        a = 0;
        b = 0;
    }
    invent2(invent1 i)
    {
        this->a = i.geta();
        this->b = i.getb();
    }
    void display()
    {
        cout << "value of a of invent1 is " << a << endl;
        cout << "value of b of invent1 is " << b << endl;
    }
};
int main()
{
    invent1 s1(5, 4);
    s1.display();
    invent2 d1;
    cout << "before anitiliazation invent2 values " << endl;
    d1.display();
    float tv;
    tv = s1;
    cout << tv << endl;
    d1 = s1;
    d1.display();
    cout << "after initiliazation values of invent2 is " << endl;
    return 0;
}
