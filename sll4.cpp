class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head && (head -> val == val)) {
            ListNode *tempNode = head;
            head = head -> next;
            delete tempNode;
        }

        ListNode *prev = head, *curr = head;
        while (curr) {
            if (curr -> val == val) {
                ListNode *tempNode = curr;
                prev -> next = curr -> next;
                curr = curr -> next;
                delete tempNode;
            } else {
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
};
