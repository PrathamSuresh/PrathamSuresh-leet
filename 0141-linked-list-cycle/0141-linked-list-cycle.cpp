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
        ListNode* temp=head;
        vector<ListNode*> cycle;
        while(temp!=nullptr){
            if(find(cycle.begin(),cycle.end(),temp)!=cycle.end()){
                return true;
            }
            cycle.push_back(temp);
            temp=temp->next;
        }
        return false;
    }
};