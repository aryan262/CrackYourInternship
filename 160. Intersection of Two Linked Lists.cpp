class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) 
            return NULL;
        
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        while (tempA != tempB) {
            tempA = (tempA == NULL) ? headB : tempA->next;
            tempB = (tempB == NULL) ? headA : tempB->next;
        }
        
        return tempA;
    }
};
