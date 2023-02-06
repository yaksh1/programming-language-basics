
#include <stdio.h>
#include <stdlib.h>


struct Node
{
  int data;
  char name[30];
  struct Node *next;
};

// CREATING A LINK-LIST
void create(struct Node *head)
{
  // TEMPORARY TEMP REFERENCE IS CREATED FOR HEAD
  struct Node *temp = head;
  struct Node *curr;
  char choice;
  do
  {
    curr = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the Name:\n");
    scanf("%s", curr->name);
    printf("Enter the Roll_no:\n");
    scanf("%d", &curr->data);

    curr->next = NULL;
    temp->next = curr;
    temp = curr;

    printf("\n\nEnter y to print more\nEnter s to Save\n");
    scanf(" %c", &choice);

  } while (choice == 'y');
}

// DISPLAY
void display(struct Node *head)
{
  struct Node *curr;
  if (head->next == NULL)
  {
    printf("List is Empty\n");
  }
  else
  {
    curr = head->next;
    printf("\n\nAddress \t Roll_no\t Name\tAddress_Next\t\n");
    while (curr != NULL)
    {
      printf("%p\t %d\t %s\t %p\t\n", curr, curr->data, curr->name, curr->next);
      curr = curr->next;
    }
  }
}

// INSERT
struct Node *insert(struct Node *head){
  struct Node *p = head;
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  int pos;
  printf("enter the position you want to insert: ");
  scanf("%d", &pos);
  printf("enter name: ");
  scanf("%s", ptr->name);
  printf("enter roll: ");
  scanf("%d", &ptr->data);
  int i = 0;
  while(p!=NULL && i<pos){
    i++;
    p = p->next;
  }
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

struct Node *delete(struct Node* head){
  struct Node *p = head;
  struct Node *q = head->next;
  int i = 0,pos;

  printf("enter the position you want to delete: ");
  scanf("%d", &pos);
  while(i<pos && p!=NULL){
    i++;
    p = p->next;
    q = q->next;
  }
  p->next = q->next;
  free(q);
  return head;
}

struct Node *reverse(struct Node *head){
  if (head->next == NULL)
  {
    printf("List is Empty\n");
  }
  else{
    struct Node *curr, *prev ,*next;
    curr = head->next;
    prev = NULL; 
    while(curr!=NULL){
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
  }
  head->next = prev;
  }
  return head;
}

struct Node * sort(struct Node* head){
  struct Node *curr, *next,*temp;
  curr = head->next;
  while(curr!=NULL){
    next = curr->next;
    while(next!=NULL){
      if(curr->data>next->data){
        temp->next = curr->next;
        curr->next = next->next;
        next->next = temp->next;
      }
      next = next->next;
    }
    curr = curr->next;
  }
  return head;
}

int main(){
  struct Node *head;
  head = (struct Node *)malloc(sizeof(struct Node));
  head->next = NULL;
  create(head);
  display(head);
  int n,I;
  do{

    printf("1 for insertion 2 for deletion 3 for reverse 4 for sorting 5 for merging: ");
    scanf("%d", &n);
    switch(n){
      case 1:
        head = insert(head);
        display(head);
        break;
      case 2:
        head = delete (head);
        display(head);
        break;
      case 3:
        head = reverse(head);
        display(head);
        break;
      case 4:
        head = sort(head);
        display(head);
        break;
      default:
        printf("error");
        break;
    }
    printf("1 to continue 0 to stop: ");
    scanf("%d", &I);
  } while (I == 1);
}