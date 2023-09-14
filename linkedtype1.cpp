class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* start=head;
        ListNode* end=head;

        while(end!=NULL && end->next!=NULL){
            end=end->next->next;
            start=start->next;

            if(end==start){
                return true;
            }
        }
        return false;
    }
};
