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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
//         using it
         if(l1 == NULL)
             return l2;
        if(l2 == NULL)
            return l1;
        //let the list with smaller head be cur1
        ListNode *h, *cur1, *cur2;
        
        if(l1->val <= l2->val){
            h = cur1 = l1;
            cur2 = l2;
            
        }else{
            h = cur1 = l2;
            cur2 = l1;
        }
//         if else 
        if(cur1->next == NULL){
            cur1->next = cur2;
            return cur1;
        }
        
        //stop when one of the list ends
        while(cur2 != NULL && cur1 != NULL){
            // cout << cur1->val << " " << cur2->val << endl;
            if(cur1->next == NULL){
                cur1->next = cur2;
                //done processing first list
                cur1 = NULL;
            }else if(cur2->val <= cur1->next->val){
                //merge cur2 into l1 and move cur2
                ListNode* tmp = cur1->next;
                cur1->next = cur2;
                cur2 = cur2->next;
                cur1->next->next = tmp;
            }else{
                //move cur1 to the next
                cur1 = cur1->next;
            }
        }
        return h;
        
    }
};
