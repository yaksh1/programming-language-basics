#include <stdio.h>

struct node{
  int roll;
  struct node *next;
};

void create(struct node* head){
  struct node *temp = head;
  struct node *curr;
  char choice;
  do
  {
    curr = (struct node *)malloc(sizeof(struct node));

    printf("Enter the Roll_no:\n");
    scanf("%d", &curr->roll);

    curr->next = NULL;
    temp->next = curr;
    temp = curr;

    printf("\n\nEnter y to print more\nEnter s to Save\n");
    scanf(" %c", &choice);

  } while (choice == 'y');
}

void display(struct node* head){
  struct node *curr = head->next;
  printf("roll\n");
  while(curr!=NULL){
    printf("%d\n", curr->roll);
    curr = curr->next;
  }
}

struct node* insertion(struct node* head){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  printf("Enter the Roll_no:\n");
  scanf("%d", &ptr->roll);
  struct node *p = head;
  int i=0, pos;
  printf("enter position to insert: ");
  scanf("%d", &pos);
  while(i<pos&&p!=NULL){
    p = p->next;
    i++;
  }
  ptr->next = p->next;
  p->next = ptr;
  return head;
}

struct node* delete(struct node* head){
  struct node *p = head;
  struct node *q = head->next;
  int i = 0, pos;
  printf("enter position to delete: ");
  scanf("%d", &pos);
  while(i<pos&&p!=NULL){
    p = p->next;
    q = q->next;
    i++;
  }
  p->next = q->next;
  free(q);
  return head;
}

struct node* reverse(struct node* head){
  struct node *prev, *curr, *future;
  curr = head->next;
  prev = NULL;
  while(curr!=NULL){
    future = curr->next;
    curr->next = prev;
    prev = curr;
    curr = future;
  }
  head->next = prev;
  return head;
}

int main(){
  struct node *head;
  head = (struct node *)malloc(sizeof(struct node));
  head->next = NULL;
  create(head);
  display(head);
  head = insertion(head);
  display(head);
  head = delete (head);
  display(head);
  head = reverse(head);
  display(head);
}