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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int> vec;

        ListNode* temp = list1;

        while (temp != nullptr) {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        temp = list2;

        while (temp != nullptr) {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        sort(vec.begin(), vec.end());

        ListNode* ans = new ListNode(0);
        ListNode* tail = ans;

        for (int x : vec) {
            tail->next = new ListNode(x);
            tail = tail->next;
        }

        return ans->next;
    }
};