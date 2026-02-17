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

Node* removeDuplicates(Node* head)
{
    if (head == NULL) return NULL;
    Node*temp=head;
    Node*del;
    while(temp->next!=NULL)
    {
        if(temp->data !=temp->next->data)
        {
            temp=temp->next;
        }
        else
        {
            del=temp->next;
            temp->next=del->next;
            delete del;
        }
    }
    return head;

}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(10);
    head->next->next = new Node(20);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(30);

    head = removeDuplicates(head);

    Node* temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
