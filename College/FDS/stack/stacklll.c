#include <stdio.h>
struct node *top = NULL;

struct node{
  int roll;
  struct node *next;
};

int isEmpty(){
  if(top==NULL){
    return 1;
  }
  return 0;
}

int Full(){
  struct node *ptr = (struct node *)malloc(sizeof(struct node));
  if(ptr==NULL){
    return 1;
  }
  return 0;
}

struct node* push(){
  struct node *p = (struct node *)malloc(sizeof(struct node));
  printf("\nenter roll: ");
  scanf("%d", &p->roll);
  p->next = top;
  top = p;
  return top;
}

void pop(){
  struct node *p = top;
  top = top->next;
  int x = p->roll;
  free(p);
  printf("popped: %d", x);
}

int peek(){
  return top->roll;
}

void display(){
  struct node *curr = top;
  while(curr!=NULL){
    printf("%d\n", curr->roll);
    curr=curr->next;
  }
}

int main(){
  top = push();
  display();
  top = push();
  display();
  top = push();
  display();
  pop();
  pop();
  top = push();
  display();
}