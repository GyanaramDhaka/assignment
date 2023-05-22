#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    void setvalue(int a, int b)
    {
        real = a;
        imag = b;
    }
    void showdata()
    {
        cout << "real =" << real << endl
             << "imag= " << imag << endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
    complex operator*(complex c)
    {
        complex temp;
        temp.real = real * c.real;
        temp.imag = imag * c.imag;
        return temp;
    }
    int operator==(complex c)
    {
        if (real == c.real)
        {
            if (imag == c.imag)
                return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    complex c1;
    c1.setvalue(5, 6);
    c1.showdata();
    complex c2;
    c2.setvalue(2, 3);
    c2.showdata();
    complex c3, c4;
    c3 = c1 + c2;
    c4 = c1 - c2;
    complex c5;
    c5 = c1 * c2;
    if (c1 == c2)
    {
        cout << "both complex number are equal " << endl;
    }
    else
    {
        cout << "boht complex number are not equal " << endl;
    }
}