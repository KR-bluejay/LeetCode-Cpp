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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int firstVal = l1 != nullptr ? l1->val : 0;
            int secondVal = l2 != nullptr ? l2->val : 0;

            int sum = firstVal + secondVal + carry;

            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;
            
            l1 = l1 != nullptr ? l1->next : nullptr;
            l2 = l2 != nullptr ? l2->next : nullptr;
        }


        return head->next;
    }
};