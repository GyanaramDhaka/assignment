#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
class Complex
{
private:
    char *str;
    int age;

public:
    friend void *operator new(long long unsigned int);
};
void *operator new(long long unsigned int x)
{

}
int main()
{
    Complex *c1;
    c1 = new Complex;
}