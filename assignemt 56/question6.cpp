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
class linklist
{
public:
    void insertation()
    {
        int value;
        int x;
        cout << "enter number that much elements you want to insert";
        cout << endl;
        cin >> value;
        for (int i = 0; i < value; i++)
        {
            Node *temp = new Node;
            cout << "enter" << i + 1 << "element " << endl;
            cin >> x;
            temp->data = x;
            if (head == NULL)
            {
                head = temp;
                t = temp;
            }
            else
            {
                t->next = temp;
                t = t->next;
            }
        }
    }
    void printlinklist()
    {
        t = head;
        cout << "element are in linklist" << endl;
        while (t != NULL)
        {
            cout << t->data << "->";
            t = t->next;
        }
    }
    void cheakkey(int x)
    {
        t = head;
        int i = 0;
        while (t->next != NULL)
        {
            if (t->data == x)
            {
                i++;
            }
            t = t->next;
        }
        cout << "total no. of key in linklist is " << i << endl;
    }
};
int main()
{
    linklist sita;
    sita.insertation();
    sita.printlinklist();
    cout << "enter a key" << endl;
    int x;
    cin >> x;
    sita.cheakkey(x);
    sita.printlinklist();
    return 0;
}