#include <stdio.h>

// structure
typedef struct student
{
  char name[50];
  int rollNo;
  int marks;
} stu;

int maximum(stu s[], int last);
int swap(stu s[], int first, int second);

// bubble sorting
int bubble(stu s[10], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 1; j < n - i; j++)
    {
      if (s[j].rollNo < s[j - 1].rollNo)
      {
        swap(s, j, j - 1);
      }
    }
  }
  printf("the sorted array using bubble is: ");
  for (i = 0; i < n; i++)
  {
    printf("%d %s %d\n ", s[i].rollNo, s[i].name, s[i].marks);
  }
}

// selection sorting
int selection(stu s[10], int n)
{
  for (int i = 0; i < n; i++)
  {
    int last = n - i - 1;
    int maxIndex = maximum(s, last);
    swap(s, maxIndex, last);
  }
  printf("the sorted array using selection is: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d %s %d\n ", s[i].rollNo, s[i].name, s[i].marks);
  }
}

int swap(stu s[10], int first, int second)
{
  struct student temp;
  temp = s[first];
  s[first] = s[second];
  s[second] = temp;
}

int maximum(stu s[10], int last)
{
  int i, max = 0;
  for (i = 0; i <= last; i++)
  {
    if (s[i].rollNo > s[max].rollNo)
    {
      max = i;
    }
  }
  return max;
}

// shell sorting
void shell(stu s[10], int num)
{
  int gap, j, i;
  for (gap = num / 2; gap > 0; gap = gap / 2)
  {
    for (j = gap; j < num; j++)
    {
      for (i = j - gap; i >= 0; i = i - gap)
      {
        if (s[j].rollNo > s[i].rollNo)
          break;
        {
          swap(s, i, j);
        }
      }
    }
  }
  printf("the sorted array using shell is: \n");
  for (i = 0; i < num; i++)
  {
    printf("%d %s %d\n ", s[i].rollNo, s[i].name, s[i].marks);
  }
}

// insertion sorting
int insertion(struct student s[10], int n)
{
  int i, j;
  struct student temp;
  for (i = 0; i < n; i++)
  {
    temp = s[i];
    j = i - 1;
    while (j >= 0 && s[j].rollNo > temp.rollNo)
    {
      /* code */
      s[j + 1] = s[j];
      j = j - 1;
    }
    s[j + 1] = temp;
  }
  printf("the sorted array using insertion is: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d %s %d\n ", s[i].rollNo, s[i].name, s[i].marks);
  }
}

void accept(stu s[10], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("enter name of the student: ");
    scanf("%s", &s[i].name);
    printf("enter rollNo number of the student: ");
    scanf("%d", &s[i].rollNo);
    printf("enter marks of the student: ");
    scanf("%d", &s[i].marks);
  }
}

void display(stu s[10], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("name: %s, rollNo: %d, marks: %d\n", s[i].name, s[i].rollNo, s[i].marks);
  }
}

int main()
{
  // int a[] = {2, 6, 4, 1, 3, 7, 8};
  int n, ch;
  int I = 1;
  stu s[10];
  printf("how many student do you want(<10): ");
  scanf("%d", &n);

  accept(s, n);
  display(s, n);
  do
  {
    printf("PRESS 1 for selection sort, PRESS 2 for insertion sort, PRESS 3 for shell sort: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      selection(s, n);
      printf("\n");
      break;
    case 2:
      insertion(s, n);
      printf("\n");
      break;
    case 3:
      shell(s, n);
      printf("\n");
      break;
    default:
      printf("Wrong choice\n");
    }
    printf("press 1 to continue and 0 to quit: ");
    scanf("%d", &I);
  } while (I != 0);

  // bubble(a, n);
  // printf("\n");
}
