/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curnt = head;

        while(curnt && curnt->next){
            if(curnt->val == curnt->next->val){
                curnt->next = curnt->next->next; //skip duplicates
            }
            else{
                curnt = curnt->next; //move to next node
            }
        }
        return head;
    }
};