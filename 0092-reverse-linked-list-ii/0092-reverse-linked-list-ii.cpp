class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == nullptr || left == right)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        // Find node before left
        ListNode* prev = &dummy;

        for(int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // First node of the section
        ListNode* curr = prev->next;

        // Reverse the section
        for(int i = 0; i < right - left; i++) {

            ListNode* temp = curr->next;

            curr->next = temp->next;

            temp->next = prev->next;

            prev->next = temp;
        }

        return dummy.next;
    }
};