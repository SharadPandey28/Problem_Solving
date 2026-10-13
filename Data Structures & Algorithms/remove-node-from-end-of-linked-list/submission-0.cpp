class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* slow = dummy;
        ListNode* fast = dummy;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Move both pointers until fast reaches the last node
        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        // Remove the target node
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        ListNode* newHead = dummy->next;
        delete dummy;

        return newHead;
    }
};
