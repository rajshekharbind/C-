#include<bits/stdc++.h>
using namespace std;

class Node {

public:
int data;
Node* next;
//constructor
Node(int data){
    this->data=data;
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
//insert at head;
void InsertAthead(Node* &head,int d){
    //create new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
//insert at last node
void InsertAtTail(Node* &tail,int d){
 Node* temp=new Node(d);
tail->next=temp;
tail=temp;
}
//print the node
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
void insertatpos(Node* & tail,Node* &head,int position,int d){
    //insert at start
if(position==1){
    InsertAthead(head,d);
    return;
}
//insert middle
Node* temp=head;
int cnt=1;
while(cnt<position-1){
    temp=temp->next;
    cnt++;
}
//insert at last
if(temp->next==NULL){
    InsertAtTail(tail,d);
    return;
}
Node* nodeToinsert= new Node(d);
nodeToinsert->next=temp->next;
temp->next= nodeToinsert;
}
//delete the node at any position
void deleteNode(int position,Node* & head){
    if(position==1){
        Node* temp=head;
        head=head->next;
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
      prev->next=curr->next;
       curr->next=NULL;
      delete curr;
    }
}
int main(){
Node* node1=new Node(10);
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;

//head pointed to node
Node* head=node1;
Node* tail=node1;

print(head);
InsertAtTail(tail,12);
print(head);

InsertAtTail(tail,15);
print(head);

InsertAtTail(tail,16);
print(head);
insertatpos(tail,head,5,23);
print(head);

cout<<" head "<< head->data<<endl;
cout<<" tail "<< tail->data<<endl;

deleteNode(4,head);
print(head);
return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node *next;

//constructor
Node(int data){
    this->data=data;
    this->next=NULL;
}
//distructor
~Node(){
int value=this->data;
if(this->next!=NULL){
    delete next;
    this->next=NULL;
}
cout<<"Memory is free "<<value<<" ";
}
};
void insertAThead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertATtail(Node* &tail,int d){
    Node * temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
void insertATposition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertAThead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
temp=temp->next;
cnt++;
    }
if(temp->next=NULL){
    insertATtail(tail,d);
    return;
}
Node* newnode=new Node(d);
newnode->next=temp->next;
temp->next=newnode;
cout<<endl;
}

void deletethenode(int position,Node* &head){
    if(position==1){
Node* temp=head;
head=head->next;
temp->next=NULL;
delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr=curr->next;
            cnt++;
        }
         prev->next=curr->next;
       curr->next=NULL;
      delete curr;
    }


}
int main(){
Node *node1=new Node(10);
Node* head=node1;
Node* tail=node1;
//print(head);

insertATtail(tail,12);
//print(head);

insertATtail(tail,14);
//print(head);

insertATtail(tail,67);
//print(head);
insertATtail(tail,56);
//print(head);

/*insertATposition(tail,head,4,23);
print(head);
print(head);
cout<<endl;

cout<<"  head  "<<head->data<<endl;
cout<<"  tail  "<<tail->data<<endl;

deletethenode(2,head);
print(head);
return 0;
}*/