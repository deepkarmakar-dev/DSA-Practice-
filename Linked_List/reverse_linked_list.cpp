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

Node* reverseList(Node* head)
{
    Node*prev=NULL;
    Node*fut=NULL;
    Node*curr=head;
    while(curr!=NULL)
    {
      fut=curr->next;
      curr->next=prev;
      prev=curr;
      curr=fut;
      
      
    }
    
    return prev;
}

int main()
{
    
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head = reverseList(head);

    Node* temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
