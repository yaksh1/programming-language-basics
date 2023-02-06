#include <stdio.h>
//----------------------------------------------------------------
//FIND OUT NUMBER OF VOWELS IN STRING
//----------------------------------------------------------------
void vowels(char str[100]);

int main(){
  char str[100];
  printf("enter string: ");
  fgets(str, 100, stdin);
  vowels(str);
  return 0;

}

void vowels(char str[100]){
  int i,count=0;
  for (i = 0;str[i] != '\0';i++){
    if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
    {
      count++;
    }
  }
  printf("Total vowels in the string are: %d", count);
}
