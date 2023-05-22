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
    void deletedublicate()
    {
        Node *toe;
        t = head;
        toe = t->next;
        while (t->next != NULL)
        {
            while (toe->next != NULL)
            {
                if (t->data == toe->data)
                {
                    t->next = toe->next;
                    toe->next->pri = t;
                }
                toe = toe->next;
            }
            t = t->next;
            toe=t->next;
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
   
    sita.deletedublicate();
    cout<<endl;
    sita.print();
    return 0;
}