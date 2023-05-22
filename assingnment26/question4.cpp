#include <iostream>
using namespace std;
class Counter
{
public:
    static int counter;
    Counter()
    {
        counter++;
    }
};
int Counter::counter;
int main()
{
    cout << "before making intance of class " << endl;
    cout << endl;

    cout << "value of counter value =" << Counter::counter << endl;
    cout << endl;

    Counter c1;
    cout << "after making one intance of class" << endl;
    cout << endl;

    cout << "value of counter value =" << Counter::counter << endl;
    cout << endl;

    Counter c2;
    cout << "after making another intance of class " << endl;
    cout << endl;

    cout << "value of counter value =" << Counter::counter << endl;
    return 0;
}