#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
};
Node *head = NULL;
Node *t = NULL;
Node *rear = NULL;
class Stack
{
public:
    void insertation(int x)
    {
        Node *temp = new Node;
        temp->data = x;
        if (head == NULL)
        {
            head = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = rear->next;
        }
    }
    void deletion()
    {
        t = head;
        if (t == NULL)
        {
            cout << "stack is underflow " << endl;
        }
        else
        {
            while (t->next != rear)
            {
                t = t->next;
            }
            t->next = NULL;
            rear = t;
        }
    }
    void printstack()
    {
        t = head;
        cout << "elements are in stack " << endl;
        while (t !=NULL )
        {
            cout << t->data << "->";
            t = t->next;
        }
    }
};
int main()
{
    Stack sita;
    int x;
    int p;
    cout << "enter number that much you want to insert in stack";
    cout << endl;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cout << "enter " << i + 1 << "element" << endl;
        cin >> p;
        sita.insertation(p);
    }
    sita.deletion();
    sita.printstack();
    return 0;
}