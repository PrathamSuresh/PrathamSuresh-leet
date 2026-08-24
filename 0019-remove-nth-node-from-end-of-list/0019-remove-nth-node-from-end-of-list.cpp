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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr){
            count+=1;
            temp=temp->next;
        }
        int ans=count-n;
        if(ans==0){
            return head->next;
        }
        count=0;
        temp=head;
        ListNode* prev=nullptr;
        while(count<ans){
            prev=temp;
            temp=temp->next;
            count+=1;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};