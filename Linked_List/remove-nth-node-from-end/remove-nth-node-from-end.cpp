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


Node* removeNthFromEnd(Node* head, int n)
{
    Node*temp=head;
    
    int count=0;
    
    while(temp)
    {
     count++;
     temp=temp->next;
    }
    temp=head;
    
    
    
    if (n == count)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }
    
    n=count-n-1;
    
    while(n--)
    {
       temp=temp->next;
    }
    Node*del=temp->next;
    temp->next=del->next;
    delete del;
    return head;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    int n = 2;

    head = removeNthFromEnd(head, n);

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
