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
class Doublylinklist
{
public:
    void create(int x)
    {
        t = head;
        Node *temp = new Node;
        temp->data = x;
        if (head == NULL)
        {
            head = temp;
            temp = NULL;
        }
        else
        {
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
            temp->pri = t;
        }
    }
    void print()
    {
        t = head;
        while (t != NULL)
        {
            cout << t->data << " ->";
            t = t->next;
        }
    }
    void insertion(int x)
    {
        t = head;
        Node *temp = new Node;
        temp->data = x;
        if (t == NULL)
        {
            head = temp;
        }
        else
        {
            while (t->next != NULL)
            {
                if (t->data >= x)
                {
                    if (t->pri == NULL)
                    {
                        temp->next = t;
                        t->pri = temp;
                        head = temp;
                    }
                    t->pri->next = temp;
                    temp->pri = t->pri;
                    temp->next = t;
                    t->pri = temp;
                    break;
                }
                t = t->next;
            }
        }
        if (t->next == NULL)
        {
            t->next=temp;
            temp->pri=t;
        }
    }
};
int main()
{
    Doublylinklist sita;
    cout << "enter number " << endl;
    int count;
    int x;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << "enter " << i + 1 << " element =  ";
        cin >> x;
        sita.create(x);
    }
    sita.print();
    cout << "enter insertion element = ";
    cin >> x;

    sita.insertion(x);
    sita.print();
    return 0;
}