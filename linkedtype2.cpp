Node *findMiddle(Node *head) {
    // Write your code here
        Node *fast=head;
        Node *slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
       
}
