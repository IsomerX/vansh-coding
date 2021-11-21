#include <iostream>
#include "../Headers/Node.h"

using namespace std;

void insert(Node *head, int x)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(x);
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void display_r(Node* head){
    if(head == NULL)
        return;
    cout << head->val << " ";
    display_r(head->next);
}

void delete_node(Node *head, int x)
{
    Node *temp = head;
    while (temp->next != NULL && temp->next->val != x)
    {
        // cout << "h" <<endl;
        temp = temp->next;
    }
    if(temp->next == NULL){
        cout << "value not found" << endl;
        return;
    }
    Node* r = temp->next;
    temp->next = temp->next->next;
    delete r;
}

int main(void)
{
    Node *head = new Node(42069);
    insert(head, 3);
    insert(head, 4);
    insert(head, 10);
    for (int i = 0; i < 10; i++)
        insert(head, i);
    display(head);
    cout << endl;
    delete_node(head, 9);
    display_r(head);
    return 0;
}

/*
step 1 : head pe jao
Step 2 : tab tak aage badte raho jab tak node ka next null na ho jaye
step 3 : new node banao and pichle wale ko link kerdo
*/