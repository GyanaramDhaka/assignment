#include <iostream>
using namespace std;
class product
{
private:
    int x;

public:
    void setdata(int a)
    {
        x = a;
    }
    int getproduct()
    {
        return x;
    }
    void display()
    {
        cout << "value of x is " << x << endl;
    }
};
class item
{
private:
    int x;

public:
    item()
    {
    }
    item(product p)
    {
        x = p.getproduct();
    }
    void display()
    {
        cout << "value of x is " << x << endl;
    }
};
int main()
{
    product p;
    p.setdata(6);
    p.display();
    item i;
    i = p;
    i.display();
    return 0;
}