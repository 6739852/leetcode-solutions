class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for(int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        while(fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;

        delete nodeToDelete;

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
