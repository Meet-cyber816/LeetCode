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
        ListNode *temp = head;
        int len=0;
        
        while(temp != nullptr){
            temp = temp->next;len++;
        }
        int j=0;
        while(j<len){
            temp = head;
            while(temp != nullptr && temp->next != nullptr){
                if(temp->val == temp->next->val){
                    ListNode *tmp = temp->next;
                    temp->next = temp->next->next;
                    delete tmp;
                }
                temp = temp->next;
            }
            j++;
        }
        return head;
    }
};
