/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
          set<ListNode*> seen;
        ListNode* cur = head;
        
        while(cur != NULL){
            // cout << cur->val << " ";
            if(find(seen.begin(), seen.end(), cur) == seen.end())
                seen.insert(cur);
            else
                return true;
            cur = cur->next;
        }
        cout <<endl;
        
        return false;
    }
};
