#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};


bool hasCycle(Node* head)
{
    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL &&fast->next!=NULL)
    {
       fast=fast->next->next;
       slow=slow->next;
       
       if(fast==slow)
       {
        return true;
       }
       
    }
    return false;
}

int main()
{
    
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    
    head->next->next->next->next->next = head->next->next;

    if (hasCycle(head))
        cout << "Cycle detected in linked list" << endl;
    else
        cout << "No cycle in linked list" << endl;

    return 0;
}
