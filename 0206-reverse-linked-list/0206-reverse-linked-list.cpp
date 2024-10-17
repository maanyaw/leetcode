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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;  // Initialize previous pointer to null
        ListNode* temp = head;     // Start with the head of the list
        
        while (temp != nullptr) {
            ListNode* next = temp->next; // Save the next node
            temp->next = prev;           // Reverse the current node's pointer
            prev = temp;                 // Move the prev pointer forward
            temp = next;                 // Move the temp pointer forward
        }
        
        return prev;  // prev will be the new head of the reversed list
    }
};
