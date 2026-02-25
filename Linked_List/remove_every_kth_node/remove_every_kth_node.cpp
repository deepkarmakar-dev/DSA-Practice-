#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

Node* removeEveryKthNode(Node* head, int k) {

    Node* temp = head;
    Node* prev = NULL;
    
    if(k==1)
    {
     return NULL;
    }
    
    int count = 1;

    while(temp)
    {
        if(count == k)
        {
            prev->next = temp->next;

            delete temp;

            temp = prev->next;
            count = 1;
        }
        else 
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
    }

    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
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

    head = removeEveryKthNode(head, k);

    printList(head);

    return 0;
}
