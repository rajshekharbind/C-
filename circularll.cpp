#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;
//constractor
Node(int d){
    this->data=d;
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
void InsertAtnode(Node* &tail,int element,int d){
//create new node
if(tail==NULL){
    Node* newNode=new Node(d);
    tail=newNode;
    newNode->next=newNode;
}
else{
Node* curr =tail;

while(curr->data!=element){
   curr=curr->next; 
}
Node* temp=new Node(d);
temp->next=curr->next;
curr->next=temp;
}
}
void print(Node* tail){
    Node* temp=tail;
    do{
    cout<<tail->data<<" ";
    tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}
int main(){
Node* tail=NULL;
InsertAtnode(tail,5,3);
 print(tail);
 InsertAtnode(tail,3,5);
 print(tail);
 InsertAtnode(tail,7,9);
 print(tail);
InsertAtnode(tail,9,10);
print(tail);
InsertAtnode(tail,3,4);
print(tail);
return 0;
}