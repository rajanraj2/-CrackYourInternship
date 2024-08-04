// Link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Remove Nth Node From End of List


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* first = dummy;
        ListNode* second = dummy;

        for (int i = 0; i <= n; i++) {
            first = first->next;
        }

        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        second->next = second->next->next;

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};




// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* current = head;
//         int count = 0;

//         while (current) {
//             count++;
//             current = current->next;
//         }

//         if (n > count) return head;

//         if (count == n) return head->next;

//         int index = count - n;
//         current = head;
//         int i = 0;

//         while (current && current->next) {
//             if (index - 1 == i) {
//                 current->next = current->next->next;
//                 break;
//             }
//             i++;
//             current = current->next;
//         }

//         return head;
//     }
// };