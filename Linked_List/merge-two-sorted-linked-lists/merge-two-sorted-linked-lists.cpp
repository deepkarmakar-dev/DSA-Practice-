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

Node* mergeTwoLists(Node* head1, Node* head2)
{
    Node*temp=new Node(0);
    Node*dummy=temp;
    while(head1 && head2)
    {
      if(head1->data < head2->data)
      {
        dummy->next=head1;
        head1=head1->next;
      }
      else
      {
       dummy->next=head2;
       head2=head2->next;
      }
      dummy=dummy->next;
      
    }
    
    if(head1)
    {
      dummy->next=head1;
    }
    if(head2)
    {
     dummy->next=head2;
    }
    dummy=temp;
    temp=temp->next;
    delete dummy;
    return temp;
    
}

int main()
{
    Node* head1 = new Node(10);
    head1->next = new Node(30);
    head1->next->next = new Node(50);

    Node* head2 = new Node(20);
    head2->next = new Node(40);
    head2->next->next = new Node(60);

    Node* head = mergeTwoLists(head1, head2);

    Node* temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
