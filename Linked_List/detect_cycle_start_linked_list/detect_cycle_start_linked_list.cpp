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


Node* detectCycleStart(Node* head)
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
            return slow;

        }

    }
    return NULL;
    
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    // Create cycle: 50 -> 30
    head->next->next->next->next->next = head->next->next;

    Node* start = detectCycleStart(head);

    if (start != NULL)
        cout << "Cycle starts at node with value: " << start->data << endl;
    else
        cout << "No cycle found" << endl;

    return 0;
}
