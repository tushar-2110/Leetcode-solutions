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
    ListNode* middleNode(ListNode* head) {
        
        
        ListNode *temp=head;
        int i=0;
        while(temp)
        {
            i++;
            temp=temp->next;
        }
        
        temp=head;
        
        //int ans=0;
        int j=0;
        while(j<i/2)
        {
           // ans=temp->val;
            temp=temp->next;
            j++;

        }
        
        head=temp;
        
        return head;
        
    }
};