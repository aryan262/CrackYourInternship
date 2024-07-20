class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = new ListNode();
        temp->next = head;
        ListNode* p = temp;
        while (p->next) {
            if (p->next->val == val) {
                p->next = p->next->next;
            } else {
                p = p->next;
            }
        }
        return temp->next;
    }
};
