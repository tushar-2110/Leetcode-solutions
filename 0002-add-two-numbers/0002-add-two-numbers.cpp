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
void insert(ListNode* &head , ListNode* &tail , int d){
    ListNode* temp=new ListNode(d);
    if(tail==NULL){
        
        head=temp;
        tail=temp;
        return;
    }
    else{
        
        tail->next=temp;
        tail=temp;

    }
}
ListNode* add(ListNode* list1 , ListNode* list2 ){
    int carry=0;
    ListNode* anshead=NULL;
    ListNode* anstail=NULL;
    while(list1!=NULL ||list2!=NULL||carry!=0){
        int val1=0;
        if(list1!=NULL){
            val1=list1->val;
        } 
        int val2=0;
        if(list2!=NULL){
            val2=list2->val;
        }
        int sum=carry+val1+val2;
        int digit=sum%10;
        insert(anshead , anstail , digit  );
        carry=sum/10;
        if(list1 !=NULL){
            list1=list1->next;
        }
        if(list2!=NULL){
            list2=list2->next;
        }
        
    }
    return anshead;
}

class Solution {
    
       
    public:
      ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          
        
        
           ListNode* ans=add(l1 , l2);

           

           return ans;





        

    }
};