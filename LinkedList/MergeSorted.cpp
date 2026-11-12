#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
    if (head1 == NULL || head2 == NULL) {
        return head1 == NULL ? head2 : head1;
    }

    if (head1->val <= head2->val) {
        head1->next = mergeTwoLists(head1->next, head2);
        return head1;
    }
    else {
        head2->next = mergeTwoLists(head1, head2->next);
        return head2;
    }
}

int main() {
    // First sorted linked list: 1 -> 2 -> 4
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);

    // Second sorted linked list: 1 -> 3 -> 4
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    ListNode* head = mergeTwoLists(head1, head2);

    // Print merged linked list
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}