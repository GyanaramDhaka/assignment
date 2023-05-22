#include <iostream>
using namespace std;
class item
{
    int a;
    int b;

public:
    item(int a)
    {
        this->a = a;
    }
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "value of a is =" << a<<endl;
        cout << "value of b is =" << b<<endl;
    }
    item()
    {
        a = 0;
        b = 0;
    }
};
class product
{
    int a;
    int b;

public:
    product()
    {
        a = 0;
        b = 0;
    }
    void display()
    {
        cout << "value of a is =" << a<<endl;
        cout << "value of b is =" << b<<endl;
    }
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    operator item()
    {
        return a;
    }
};
int main()
{
    item i;
    i.display();
    cout << "before initiliazation value of item object :";
    cout << endl;

    product p;
    p.setdata(5, 6);
    cout << "value in product class object " << endl;

    p.display();
    i = p;
    cout << "after initilaization" << endl;
    i.display();
    return 0;
}