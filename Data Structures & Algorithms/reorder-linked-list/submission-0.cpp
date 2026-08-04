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
    void reorderList(ListNode* head) {

        // seperate nodes
        int n=1;
        ListNode* curr = head;
        while(curr){
            curr = curr->next;
            n++;
        }
        curr = head;
        ListNode* prev;
        int mid = n/2 ;
        while(mid --){
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;

        // reverse 2nd half
        prev = nullptr;
        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* head2 = prev;

        // joining both
        while(head2){
            ListNode* temp1 = head->next;
            ListNode* temp2 = head2->next;
            head->next = head2;
            head = temp1;
            head2->next = head;
            head2 = temp2;
        }

    }
};
