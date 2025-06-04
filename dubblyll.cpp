#include<bits/stdc++.h>
using namespace std;

class Node{

public:

int data;
Node* prev;
Node* next;
//constructor

Node(int d){
    this->data=d;
       this->prev=NULL;
          this->next=NULL;
}

//Distructor
~Node(){
    int value=this->data;
    //memory free
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }cout<<"memory is free ="<<value<<endl;
}
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
cout<<temp->data<<" ";
temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

//insert at head
void insertionathead(Node* & head,int d){
Node* temp=new Node(d);
temp->next=head;
head->prev=temp;
head=temp;

}
void insertatTail(Node* & tail,int d){
    Node* temp=new Node(5);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertatposition(Node* & tail,Node* & head,int position,int d){
    if(position == 1){
        insertionathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
temp=temp->next;
cnt++;
    }
    if(temp->next==NULL){
        insertatTail(tail,d);
        return;
    }

    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;
}
void deleteNode(int position,Node* &head){
    if(position==1){
 Node* temp=head;
 temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

else{
       Node* curr =head;
      Node* prev=NULL;
      int cnt=1;
      while(cnt<position) {
        prev=curr;
        curr=curr->next;
        cnt++;

      }
      curr->prev=NULL;
      prev->next=curr->next;
       curr->next=NULL;
      delete curr;
    }

}
int main(){
Node* node1=new Node(10);
Node* head=node1;
Node* tail=node1;
print(head);


cout<<getLength(head)<<endl;

insertionathead(head,12);
print(head);

insertionathead(head,13);
print(head);
insertionathead(head,14);
print(head);
insertionathead(head,15);
print(head);

insertatTail(tail,67);
print(head);

insertatposition(tail,head,2,100);
print(head);

deleteNode(7,head);
print(head);
return 0;
}