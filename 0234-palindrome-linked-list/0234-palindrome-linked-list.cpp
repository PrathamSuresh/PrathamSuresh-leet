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
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=nullptr;
        ListNode* cur=slow;
        ListNode* next=nullptr;
        while(cur!=nullptr){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        ListNode* revHead=prev;
        ListNode* temp=head;
        while(revHead!=nullptr){
            if(temp->val!=revHead->val){
                return false;
            }else{
                temp=temp->next;
                revHead=revHead->next;
            }
        }
        return true;
    }
};