#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    bool isCycle = false;

    // Step 1: Detect whether a cycle exists
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            isCycle = true;
            break;
        }
    }

    if (!isCycle) {
        return NULL;
    }

    // Step 2: Find the starting point of the cycle
    slow = head;

    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Creating a cycle: 5 -> 3
    head->next->next->next->next->next = head->next->next;

    ListNode* ans = detectCycle(head);

    if (ans != NULL) {
        cout << "Cycle starts at node: " << ans->val;
    } else {
        cout << "No cycle detected";
    }

    return 0;
}