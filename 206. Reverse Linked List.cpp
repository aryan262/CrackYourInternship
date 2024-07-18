class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode*temp = head;
        ListNode*prev = NULL;
        while(temp){
            ListNode* front = temp->next;
            temp->next=prev;
            prev = temp;
            temp = front;

        }
        return prev;
    }
};
