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
    void findpair(int x)
    {
        t = head;
        y = head->next;
        while (t != NULL)
        {

            while (y != NULL)
            {
                if (x == (t->data + y->data))
                {
                    cout << "(" << y->data << "," << t->data << ")"
                         << " ";
                }
                y = y->next;
            }
            t = t->next;
        }
    }
};
int main()
{
    Doublylinklist sita;
    int x;
    int y;
    cout<<"enter number that much you want to insert "<<endl;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cout<<"enter "<<i+1<<"element "<<endl;
        cin>>y;
        sita.insertion(y);
    }
    sita.print();
    int a;
    cout<<"enter that value "<<endl;
    cin>>a;
    sita.findpair(a);
    sita.print();
    return 0;
}