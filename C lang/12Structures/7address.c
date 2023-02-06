#include <stdio.h>

//enter address of 3 people

typedef struct address{
  int houseNum;
  int block;
  char city[100];
  char state[100];
}add;

void printAddress(add people);

int main()
{
  add people[3];

  //input
  printf("Enter address details of person 1:\n");

  printf("Enter the house number: ");
  scanf("%d", &people[0].houseNum);
  printf("Enter the block number: ");
  scanf("%d", &people[0].block);
  printf("Enter the city: ");
  scanf("%s",people[0].city);
  printf("Enter the state: ");
  scanf("%s",people[0].state);

  printf("Enter address details of person 2:\n");

  printf("Enter the house number: ");
  scanf("%d", &people[1].houseNum);
  printf("Enter the block number: ");
  scanf("%d", &people[1].block);
  printf("Enter the city: ");
  scanf("%s", people[1].city);
  printf("Enter the state: ");
  scanf("%s", people[1].state);

  printf("Enter address details of person 3:\n");

  printf("Enter the house number: ");
  scanf("%d", &people[2].houseNum);
  printf("Enter the block number: ");
  scanf("%d", &people[2].block);
  printf("Enter the city: ");
  scanf("%s", people[2].city);
  printf("Enter the state: ");
  scanf("%s", people[2].state);

  //func call
  printAddress(people[0]);
  printAddress(people[1]);
  printAddress(people[2]);

  return 0;
}

void printAddress(add people){
  printf("address is: %d,%d,%s,%s\n", people.houseNum, people.block, people.city, people.state);
}
