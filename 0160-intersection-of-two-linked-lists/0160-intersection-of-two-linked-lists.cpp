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
        unordered_set<ListNode*> set;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        while(temp1!=nullptr){
            set.insert(temp1);
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            if(set.find(temp2)!=set.end()){
                return temp2;
            }
            temp2=temp2->next;
        }
        return nullptr;
    }
};