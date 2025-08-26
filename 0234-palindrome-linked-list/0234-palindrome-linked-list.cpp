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
    // Function to reverse linked list and return new head
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; // 0 or 1 node

        // Step 1: Copy original list
        ListNode* temp = head;
        ListNode* copyHead = NULL, *copyTail = NULL;
        while (temp) {
            ListNode* newNode = new ListNode(temp->val);
            if (!copyHead) {
                copyHead = newNode;
                copyTail = newNode;
            } else {
                copyTail->next = newNode;
                copyTail = newNode;
            }
            temp = temp->next;
        }

        // Step 2: Reverse the copied list
        ListNode* revHead = reverseList(copyHead);

        // Step 3: Compare original and reversed list
        ListNode* p1 = head;
        ListNode* p2 = revHead;
        while (p1 && p2) {
            if (p1->val != p2->val) return false;
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};
