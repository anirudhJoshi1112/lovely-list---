void push(Node* head, int new_data)
{
  struct Node* temp=head;
temp->data=data;
temp->next=head;
temp->prev=NULL;
if(head!=NULL)
  head->prev=temp;
head=temp;
}
