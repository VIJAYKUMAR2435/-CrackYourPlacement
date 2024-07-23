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
    ListNode* removeElements(ListNode* head, int val) {
        // if(head==NULL){
        //     return NULL;
        // }
        // if(head->val==val){
        //     return removeElements(head->next,val);
        // }
        // head->next=removeElements(head->next,val);
        // return head;
        if(head==NULL){
            return NULL;
        }
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        ListNode*ptr=head;
        while(ptr && ptr->next){
            if(ptr->next->val==val){
                ptr->next=ptr->next->next;
            }
            else{
                ptr=ptr->next;
            }
        }
          return head;
    }
    
};