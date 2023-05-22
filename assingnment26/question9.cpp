#include <iostream>
using namespace std;
class Ball
{
private:
    char a[20];
    float x;
    int y;

public:
    // getter function
    void get();
    void totalbill()
    {
        if (x <= 100)
        {
            x = x * 1.20;
        }
        else if (x >= 100 && x <= 200)
        {
            x = x * 2.00;
        }
        else
            x = x * 3.00;
        cout<<"Mr   "<<a<<"   your totalbill is   "<<x<<endl;
        cout<<endl;
        cout<<"  " <<" thanks  come agian ";
    }
};
void Ball::get()
{
    cout << "enter customer name  =  ";
    cin >> a;
    cout << endl;
    cout << "Mr" << a <<" "<<"please enter your bill no. = ";
    cin >> y;
    cout << endl;
    cout << "enter your units = ";
    cin >> x;
    cout << endl;
}
int main()
{
    Ball b1;
    b1.get();
    b1.totalbill();
    return 0;
}