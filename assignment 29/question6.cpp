#include <iostream>
using namespace std;
class Time
{
    int duration;

public:
    Time(int duration)
    {
        this->duration = duration * 60;
    }
    void display()
    {
        cout << "duration in seconds is " << duration << endl;
    }
};
int main()
{
    int duration;
    cout << "enter duration in minute " << endl;
    cin >> duration;
    Time t1 = duration;
    t1.display();
    return 0;
}