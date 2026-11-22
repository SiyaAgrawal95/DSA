#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {

    if (left == right) {
        return head;
    }

    ListNode dummy(0);
    dummy.next = head;

    ListNode* prev = &dummy;

    for (int i = 0; i < left - 1; i++) {
        prev = prev->next;
    }

    ListNode* curr = prev->next;

    for (int i = 0; i < right - left; i++) {
        ListNode* nextNode = curr->next;

        curr->next = nextNode->next;
        nextNode->next = prev->next;
        prev->next = nextNode;
    }

    return dummy.next;
}

int main() {

    // Linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int left = 2;
    int right = 4;

    head = reverseBetween(head, left, right);

    // Print reversed linked list
    ListNode* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}