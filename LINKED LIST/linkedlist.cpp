#include <iostream>
using namespace std;

class node
{
public:
    int num;
    node *next;
    node(int x)
    {
        num = x;
        next = NULL;
    }
};
// insert the node at the end of list
void insertnode(node *&head, int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)

        temp = temp->next;
    temp->next = newNode;
}

void printlist(node *head)
{
    while (head->next != NULL)
    {
        cout << head->num << "->";
        head = head->next;
    }
    cout << head->num << endl;
}

///

int main()
{
    node *head = NULL;
    node *head2 = NULL;
    // inserting node
    insertnode(head, 1);
    insertnode(head, 4);
    insertnode(head, 2);
    insertnode(head, 5);
    // printing given list
    cout << "Given Linked List:\n";
    printlist(head);

    return 0;
}