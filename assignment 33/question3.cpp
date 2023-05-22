#include <iostream>
using namespace std;
class Swap
{
private:
    int data;

public:
    Swap()
    {
        cout << "enter a data for storing in data" << endl;
        cin >> data;
    }
    void swap(Swap &s2)
    {
        this->data = this->data + s2.data;
        s2.data = this->data - s2.data;
        this->data = this->data - s2.data;
    }
    void display()
    {
        cout << "data is " << data << endl;
    }
};
int main()
{
    Swap s1;
    Swap s2;
    cout << "before swaping data in first and second ob. is ";
    cout << endl;
    s1.display();
    s2.display();
    s1.swap(s2);
    cout << "after swaping data in first and second ob. is ";
    cout << endl;
    s1.display();
    s2.display();
    return 0;
}