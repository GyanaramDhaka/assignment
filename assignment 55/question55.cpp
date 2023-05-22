#include <iostream>
using namespace std;
class Stack
{
public:
    int stack[10];
    int top;
    Stack()
    {
        top = -1;
    }
    void push(int x)
    {
        top++;
        stack[top] = x;
    }
    void topelement()
    {
        if (top == -1)
            cout << "stack is empty" << endl;
        else
            cout << "top element is = " << stack[top];
    }
    void pop()
    {
        top--;
    }
    int isempty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    int isfull()
    {
        if (top == 9)
            return 1;
        else
            return 0;
    }
    int size()
    {
        return 10;
    }
    void deletemiddle()
    {
        int num = (9 / 2) + 1;
        cout << endl;
        cout << num;
        while (num <= top)
        {
            stack[num] = stack[num + 1];
            num++;
        }
        top--;
    }
    void printstack()
    {
        int i = 0;
        while (i <= top)
        {
            cout << stack[i] << "  ";
            i++;
        }
    }
};
int main()
{
    Stack sita;
    for (int i = 0; i < sita.size(); i++)
    {
        sita.push(i);
    }
    if (sita.isfull())
    {
        cout << "stack is full" << endl;
    }
    if (sita.isempty())
    {
        cout << "stack is empty" << endl;
    }
    sita.topelement();
    cout << endl;
    sita.printstack();
    sita.deletemiddle();
    sita.topelement();
    cout << endl;
    sita.printstack();
    return 0;
}