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
    ListNode* rotateRight(ListNode* head, int k) {
         if (!head || !head->next || k == 0) return head;
        ListNode* temp = head;
        int n = 1;

        while(temp->next){
            temp = temp->next;
            n++;//5
        }
        temp->next = head;  //5->1

        //n = 5;
         k = k % n;
        int jump = n - k; //5-2= 3
        temp = head;
    
        while(--jump){
            temp = temp->next;
            
        }

        ListNode* returnHead = temp->next ;
        temp->next = NULL;
        return returnHead;
    }
};