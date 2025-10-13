#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* swapPairs(Node* head) {
    // if list is empty or has only one node → no need to swap
    if (!head || !head->next) return head;

    Node* prev = NULL;
    Node* curr = head;
    head = head->next; // new head will be second node after first swap

    while (curr && curr->next) {
        Node* nextPair = curr->next->next; // next pair start
        Node* second = curr->next;

        // swap the pair
        second->next = curr;
        curr->next = nextPair;

        // link previous pair to current swapped pair
        if (prev) prev->next = second;

        // move to next pair
        prev = curr;
        curr = nextPair;
    }

    return head;
}

// helper function to print list
void printList(Node* head) {
    while (head) {
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

    cout << "Before swapping: ";
    printList(head);

    head = swapPairs(head);

    cout << "After swapping: ";
    printList(head);

    return 0;
}
