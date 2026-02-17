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

void removeCycle(Node* head)
{

    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            slow=head;

            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;


            }
            while(fast->next!=slow)
            {
                fast=fast->next;
            }
            fast->next=NULL;
            return;


        }

    }

}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    
    head->next->next->next->next->next = head->next->next;

    removeCycle(head);

    
    Node* temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
