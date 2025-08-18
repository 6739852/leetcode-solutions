/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;

        ListNode* pos1 = headA;
        ListNode* pos2 = headB;

        while(pos1 != pos2){
            pos1 = pos1 ? pos1->next : headB;
            pos2 = pos2 ? pos2->next : headA;
        }
        return pos2;
    }
};