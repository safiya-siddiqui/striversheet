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
    cout << head->num;
}
node *middlenode(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    node *head = NULL;
    insertnode(head, 5);
    insertnode(head, 6);
    insertnode(head, 7);
    insertnode(head, 8);
    insertnode(head, 9);

    printlist(head);

    middlenode(head);
    printlist(head);

    return 0;
}