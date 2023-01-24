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
   void deleteNode(ListNode *&head, int position)
{
    if (position == 1)
    {

        ListNode *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
      
    }
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        
        deleteNode( head ,len-n+1 );
        
        
        

        return head;

    }
};