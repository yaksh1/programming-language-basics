#include <stdio.h>
#include <string.h>

//----------------------------------------------------------------
//                           SALTING
//----------------------------------------------------------------
int main()
{
  char password[100];
  printf("enter your password: ");
  scanf("%s", password);
  printf("----------------------------------------------------------------\n");

  char salt[]="123";
  strcat(password, salt);
  printf("Your salted password is: %s\n\n",password);
}