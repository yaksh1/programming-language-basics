#include <stdio.h>
#define n 20
int queue[n];
int front = -1;
int rear = -1;

void enqueue()
{
  int x;
  printf("enter number: ");
  scanf("%d", &x);
  if (rear == n - 1)
  {
    printf("overflow");
  }
  else if (front == -1 && rear == -1)
  {
    front = 0;
    rear = 0;
    queue[rear] = x;
  }
  else
  {
    rear++;
    queue[rear] = x;
  }
}

void dequeue()
{
  if (rear == -1 && front == -1)
  {
    printf("underflow");
  }
  else if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
  {
    printf("\ndeleted: %d", queue[front]);
    front++;
  }
}

void display()
{
  if (front == -1 && rear == -1)
  {
    printf("queue empty");
  }
  int i = front;
  while (i <= rear)
  {
    printf("\n%d ", queue[i]);
    i++;
  }
}

void peek(){
  printf("\n%d", queue[front]);
}


int main(){
  enqueue();
  enqueue();
  enqueue();
  display();
  peek();
  dequeue();
  peek();
  display();
}