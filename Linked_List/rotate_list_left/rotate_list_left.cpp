#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* rotate(Node* head, int k) {

    if(head==NULL||head->next==NULL||k==0)
        return head;

    Node*temp=head;
    int count=1;
    while(temp->next)
    {
        count++;
        temp=temp->next;
    }

    k=k%count;
    if(k==0)
        return head;
    Node*curr=head;
    Node*prev=NULL;
    count=count-k;

    while(count--)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    temp->next=head;
    return curr;



}

void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {


    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;

    head = rotate(head, k);

    printList(head);

    return 0;
}
