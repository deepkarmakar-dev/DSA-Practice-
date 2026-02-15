#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* findMiddle(Node* head)
{
    Node*fast=head;
    Node*slow=head;
    while(fast != NULL && fast->next != NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        
    }
    return slow;
}

int main()
{
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    Node* mid = findMiddle(head);

    if(mid)
    {
        cout << "Middle node value: " << mid->data;
    }
}
