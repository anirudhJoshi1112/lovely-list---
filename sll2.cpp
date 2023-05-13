#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertatfront(node* &head, int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertatend(node* &tail, int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    insertatfront(head,32);
    print(head);
    insertatend(tail,59);
    print(head);
    return 0;
}
