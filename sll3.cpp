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
    ~node(){
        int value =this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for the data"<<value<<endl;
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
void insertatspe(node* &head, node* &tail, int position, int d){
    node* temp=head;
    int cnt=1;
    if(position==1){
        insertatfront(head,33);
        return;
    }
    if(temp->next=NULL){
        insertatend(tail,d);
        return;
    }
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node* naya=new node(d);
    naya->next=temp->next;
    temp->next=naya;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void deletion(node* head, int position){
    node* temp=head;
    if(position==1){
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* pre=NULL;
        node* cur=head;
        int cnt=1;
        while(cnt<position){
            pre=cur;
            cur=cur->next;
            cnt++;
        }
        pre->next=cur->next;
        cur->next=NULL;
        delete cur;
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
    insertatspe(head, tail, 2, 99);
    print(head);
    insertatspe(head, tail, 1, 99);
    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deletion(head, 2);
    print(head);
    return 0;
}
