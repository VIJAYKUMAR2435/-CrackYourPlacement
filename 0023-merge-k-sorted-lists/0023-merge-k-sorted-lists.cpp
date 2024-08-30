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
ListNode*mergetwoLists(ListNode*a,ListNode*b){
    if(!a){
        return b;
    }
    if(!b){
        return a;
    }
    if(a->val<=b->val){
        a->next=mergetwoLists(a->next,b);
        return a;
    }
    if(b->val<=a->val){
        b->next=mergetwoLists(a,b->next);
        return b;
    }
    return NULL;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return 0;
        }
        if(lists.size()==1){
            return lists[0];
        }
        for(int i=1;i<lists.size();i++){
            lists[0]=mergetwoLists(lists[0],lists[i]);
        }
        return lists[0];
    }
};