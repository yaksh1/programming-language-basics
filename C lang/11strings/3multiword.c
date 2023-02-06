#include <stdio.h>

//to take input of multi word we use fgets() and puts(), gets() is outdated
int main(){
  char fullname[100];
  fgets(fullname, 100, stdin);
  puts(fullname);
} 