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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        vector<int> vec;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        ListNode* evenHead = temp2;
        while (temp1 != nullptr) {
            vec.push_back(temp1->val);
            if (temp1->next != nullptr) {
                temp1 = temp1->next->next;
            } else {
                temp1 = nullptr;
            }
        }
        while (temp2 != nullptr) {
            vec.push_back(temp2->val);
            if (temp2->next != nullptr) {
                temp2 = temp2->next->next;
            } else {
                temp2 = nullptr;
            }
        }

        temp1 = head;
        for (int i = 0; i < vec.size(); i++) {
            temp1->val = vec[i];
            temp1 = temp1->next;
        }
        return head;
    }
};