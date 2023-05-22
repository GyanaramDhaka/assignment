#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int ima;

public:
    void setdata(int real, int ima)
    {
        this->real = real;
        this->ima = ima;
    }
    operator int()
    {
        return real;
    }
    void display()
    {
        cout << "real is =" << this->real << endl;
        cout << " ima is =" << this->ima << endl;
    }
};
int main()
{
    complex c;
    c.setdata(4, 5);
    c.display();
    int a;
    a = (int)c;
    cout << "a is =" << a << endl;
    return 0;
}