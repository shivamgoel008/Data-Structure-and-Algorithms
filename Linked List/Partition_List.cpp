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
    ListNode* partition(ListNode* head, int x) {
        vector<int>small,large;
        
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x)
                small.push_back(temp->val);
            
            else 
                large.push_back(temp->val);
            
            temp=temp->next;
        }
        
        ListNode* ans=head;
        
        for(auto i:small){
            head->val=i;
            head=head->next;
        }
        
        for(auto i:large){
            head->val=i;
            head=head->next;
        }
        
        return ans;
    }
};