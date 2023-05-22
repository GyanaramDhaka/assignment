#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *pri;
    Node()
    {
        data = 0;
        next = NULL;
        pri = NULL;
    }
};
Node *head = NULL;
Node *t = NULL;
Node *rear = NULL;
Node *y = NULL;
class Doublylinklist
{
public:
    void insertion(int value)
    {
        t = head;
        Node *temp = new Node;
        temp->data = value;
        if (rear == NULL)
        {
            rear = temp;
            head = temp;
        }
        else
        {
            rear->next = temp;
            temp->pri = rear;
            rear = rear->next;
            temp = NULL;
        }
    }
    void print()
    {
        t = head;
        while (t != NULL)
        {
            cout << t->data << "->" << endl;
            t = t->next;
        }
    }
    void roation(int n)
    {
        int count = 0;
        t = head;
        Node *temp;
        while (t->next != NULL)
        {
            if (count == n)
            {
                t->pri->next = NULL;
                t->pri = NULL;
                temp = t;
            }
            count++;
            t = t->next;
        }
        t->next = head;
        head->pri = t;
        head = temp;
    }
};
int main()
{
    Doublylinklist sita;
    int x;
    int y;
    cout << "enter number that much you want to insert " << endl;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cout << "enter " << i + 1 << "element " << endl;
        cin >> y;
        sita.insertion(y);
    }
    sita.print();
    cout<<"enter value of x"<<endl;
    cin>>x;
    sita.roation(x);
    cout << endl;
    sita.print();
    return 0;
}