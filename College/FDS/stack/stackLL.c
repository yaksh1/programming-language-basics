#include <stdio.h>
struct Node *top = NULL;


struct Node{
  int roll;
  char name[50];
  struct Node *next;
};

int isEmpty(){
  if(top==NULL){
    return 1;
  }
  return 0;
}

int isFull(){
  struct Node *p = (struct Node *)malloc(sizeof(struct Node));
  if(p==NULL){
    return 1;
  }
  return 0;
}

struct Node *push(){
  if(isFull()){
    printf("stack overflow");
  }else{
  struct Node *p = (struct Node *)malloc(sizeof(struct Node));
  printf("\nenter roll: ");
  scanf("%d", &p->roll);
  printf("enter name: ");
  scanf("%s", p->name);
  p->next = top;
  top = p;
  return top;
  }
}

void pop(){
  if(isEmpty()){
  printf("stack underflow");
  }else{
  struct Node *p = top;
  top = top->next;
  int x = p->roll;
  free(p);
  printf("\npopped: %d", x);
  }
}

void display(){
  struct Node *ptr = top;
  printf("stack:");
  while(ptr!=NULL){
  printf("\n%d\t%s", ptr->roll,ptr->name);
  ptr = ptr->next;
  }
}

void stackTop(){
  printf("\n%d %s", top->roll, top->name);
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
  // printf("\npopped ele: %d", ele);
  top = push();
  display();
  stackTop();
}