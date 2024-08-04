// Link - https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
// Remove Duplicates from Sorted List II


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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* current = head;

        while (current) {
            bool isDuplicate = false;

            while (current->next && current->val == current->next->val) {
                isDuplicate = true;
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } 

            if (isDuplicate) {
                prev->next = current->next;
                delete current;
            }
            else {
                prev = prev->next;
            }

            current = prev->next;
        }

        ListNode* newHead = dummy->next;
        delete dummy;

        return newHead;
    }
};