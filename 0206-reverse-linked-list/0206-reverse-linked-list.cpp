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
    ListNode* reverseList(ListNode* head) {
         if (head == NULL || head->next == NULL) {
            return head;
        }

        stack<ListNode*>q;
        while(head !=nullptr){
            q.push(head);
            head=head->next;
        }
        ListNode* newHead=q.top();
        q.pop();
        ListNode* temp=newHead;
        while(!q.empty()){
            temp->next=q.top();
            q.pop();
            temp=temp->next;
        }
        temp->next=nullptr;
        return newHead;
    }
};