#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* t = new ListNode(0);   // dummy start node
    ListNode* temp = t;              // pointer to build the merged list
    ListNode* a = list1;
    ListNode* b = list2;

    // if both lists are empty
    if (!a && !b) {
        return nullptr;
    }

    // merge nodes in sorted order
    while (a && b) {
        if (a->val <= b->val) {
            temp->next = a;   // connect a
            a = a->next;      // move a forward
        } else {
            temp->next = b;   // connect b
            b = b->next;      // move b forward
        }
        temp = temp->next;    // move temp forward
    }

    // attach remaining nodes
    if (a) temp->next = a;
    else temp->next = b;

    return t->next;  // skip dummy node
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create linked list from array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Main function
int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n1 = 3, n2 = 3;

    ListNode* list1 = createList(arr1, n1);
    ListNode* list2 = createList(arr2, n2);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    ListNode* mergedList = mergeTwoLists(list1, list2);

    cout << "Merged Sorted List: ";
    printList(mergedList);

    return 0;
}
