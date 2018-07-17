#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
  int data;
  struct Node  *next;
};
void push(Node** head,int new_data){

struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
new_node->data=new_data;
new_node->next=(*head);
(*head) = new_node;
}
void insertAfter(struct Node*prev, int new_data){

if(prev->next==NULL){
  cout<<"The previous node cannot be null"<<endl;
}
struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
new_node->next=prev->next ;
new_node->data=new_data;
prev->next=new_node;
}
void append(Node **head,int new_data){
  struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
  struct Node *last = *head;
  new_node->data=new_data;
  if(*head==NULL){
    *head=new_node;
  }
  while(last->next==NULL){
   last=last->next;

  }
  last->next=new_node;
}
void printList(struct Node *node)
{
  while (node != NULL)
  {
    //cout<<"hello";
    int k =node->data;
     cout<<k;
     node = node->next;
  }
}
int main(){
struct Node* head = NULL;
//struct Node*head;

append(&head,6);

push(&head,7);
push(&head,1);
append(&head,4);
insertAfter(head->next,8);
printList(head);
}
