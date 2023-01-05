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
    
    int n;
    void solve(ListNode* head,stack<int> &s,vector<int> &ans){
        if(head == NULL){
            return;
        }
        solve(head->next,s,ans);
        while(!s.empty() && s.top()<=head->val){
            s.pop();
        }
        n--;
        if(!s.empty()){
            ans[n] = s.top();
        }
        s.push(head->val);
    }
    
    
    
    vector<int> nextLargerNodes(ListNode* head) {
        
        
         n = 0;
        ListNode* p = head;
        while(p != NULL){
            n++;
            p = p->next;
        }
        vector<int> ans(n,0);
        stack<int> s;
        solve(head,s,ans);
        return ans;
        
    }
};