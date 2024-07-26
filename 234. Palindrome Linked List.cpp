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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;

        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        if (fast == NULL) {
            fast = slow;
            slow = prev;
        } else {
            fast = slow->next;
            slow = prev;
        }

        while(slow != NULL && fast != NULL) {
            if(slow->val != fast->val) return false;
            slow = slow->next;
            fast = fast->next;
        }

        return slow == NULL && fast == NULL;
    }
};
