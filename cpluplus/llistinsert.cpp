
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};
 void push(struct Node** point, int new_data)
{
      struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
       newnode->data  = new_data;
       newnode->next = *point;
       *point   = newnode;
}
void insertAfter(struct Node* prev_node, int new_data)
{
  if (prev_node == NULL)
    {
      printf("pointer cannot be NULL");
      return;
    }
    struct Node* newnode =(struct Node*) malloc(sizeof(struct Node));
    newnode->data  = new_data;
    newnode->next = prev_node->next;
    prev_node->next = newnode;
}
 void insertBegin(struct Node** point, int new_data)
{
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   struct Node *last = *point;
    newnode->data  = new_data;
   newnode->next = NULL;
    if (*point == NULL)
    {
       *point = newnode;
       return;
    }
    while (last->next != NULL)
        last = last->next;
     last->next = newnode;
    return;
}
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}
int main()
{
  struct Node* head = NULL;
   insertBegin(&head, 6);
   push(&head, 7);
   push(&head, 1);
   insertBegin(&head, 4);
   insertAfter(head->next, 8);
   printf("\n Created Linked list is: ");
  printList(head);
}
