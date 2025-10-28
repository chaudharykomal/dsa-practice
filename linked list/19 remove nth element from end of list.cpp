#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to remove Nth node from the end
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0); // dummy node before head
    dummy->next = head;

    ListNode* fast = dummy;
    ListNode* slow = dummy;

    // Move fast ahead by n+1 steps to maintain gap
    for (int i = 0; i <= n; i++) {
        fast = fast->next;
    }

    // Move both until fast reaches the end
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }

    // Delete the nth node
    slow->next = slow->next->next;

    // Store new head
    ListNode* newHead = dummy->next;

    // Free dummy node memory
    delete dummy;

    return newHead; // return updated head
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list for testing
ListNode* createList() {
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    return n1; // head
}

int main() {
    // Create sample list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = createList();

    cout << "Original List: ";
    printList(head);

    int n = 2; // remove 2nd node from end
    head = removeNthFromEnd(head, n);

    cout << "After removing " << n << "th node from end: ";
    printList(head);

    return 0;
}
