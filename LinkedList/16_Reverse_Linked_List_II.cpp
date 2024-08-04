// Link - https://leetcode.com/problems/reverse-linked-list-ii/
// Reverse linked list II


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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right || !head) {
            return head;
        }

        ListNode* dummy = new ListNode();
        dummy->next = head;

        ListNode* pre = dummy;
        for (int i = 1; i < left; i++) {
            pre = pre->next;
        }

        ListNode* prev = nullptr;
        ListNode* current = pre->next;
        ListNode* next = nullptr;

        for (int i = 0; i < right - left + 1; i++) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        pre->next->next = current;
        pre->next = prev;

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;

    }
};