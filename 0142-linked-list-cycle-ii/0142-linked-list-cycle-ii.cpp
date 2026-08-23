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
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode*> vec;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(find(vec.begin(),vec.end(),temp)!=vec.end()){
                return temp;
            }
            vec.push_back(temp);
            temp=temp->next;
        }
        return nullptr;
    }
};