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
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        
        ListNode* pos1 = head;
        ListNode* pos2 = head;

        while(pos2 && pos2->next){
            pos1 = pos1->next;
            pos2 = pos2->next->next;

            if(pos1 == pos2) return true;
        }

        return false;
    }
};