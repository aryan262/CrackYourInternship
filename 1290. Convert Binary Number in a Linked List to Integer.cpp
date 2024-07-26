class Solution {
public:
    int getLength(ListNode* &head){
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        return c;
    }
    int getDecimalValue(ListNode* head) {
        int c=getLength(head);
        c=c-1;
        int sum=0;
        ListNode* temp=head;
        while(temp!=NULL){
            sum=sum+temp->val*(pow(2,c));
            c--;
            temp=temp->next;
        }
    return sum;
    }
};
