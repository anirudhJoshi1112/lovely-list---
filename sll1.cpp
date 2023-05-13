#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void insertatfront(node* &head, int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void printkrde(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1=new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    node* head=node1;

    insertatfront(head,12);
     insertatfront(head,15);
    printkrde(head);
    return 0;
}
