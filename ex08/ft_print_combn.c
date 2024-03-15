#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

void format_print(int n, int a[], int is_end)
{
  int i;
  i = 0;
  while(n > 0) {
    putchar(a[i]);
    i++;
    n--;
  }

  if(is_end == 0)
  {
    putchar(',');
    putchar(' ');
  } else {
    putchar('\n');
  }
}

void print_combn(int n){

  int min[n];
  int max[n];
  int is_end;
  int i;
  int j;
  int cursor;

  is_end = 0;
  j = n - 1;
  i = 0;
  while (i < n)
  {
    min[i] = i;
    max[i] = 9 - j;
    i++;
    j--;
  }

  i = 0;
  j = n - 1;

  printf("min[j] %d", min[j]);
  printf("max[j] %d\n", max[j]);


  while (j > 0)
  {
    while (min[j] <= max[j])
    {
      i = 0;
      while (i < n) printf("%d", min[i++]);
      printf("\n");
      min[j]++;
    }
    j--;
    min[j]++;
    printf("min[%d] == %d\n", j, min[j]);
    i = j + 1;
    /*
    while (j < n)
    {
      min[j] = min[j - 1] + 1;
      j++;
    }
    */
  }
  /*

  while (j > 0)
  {
    cursor = max[j];
    if min[j] = max[j]
    {
      j--;
      min[j] = max[j];
      i = j + 1;
      while(i < n)
      {
        min[i] = min[i-1] + 1;
        i++;
      }
    }
  }

  printf("Printing final min[]:");
  while (i < n) printf("%d", min[i++]);
  i = 0;
  printf("\nPrinting final max[]:");
  while (i < n) printf("%d", max[i++]);
  printf("\n");
  */




}

int main(){
  print_combn(3);
  /*
  print_combn(0);
  print_combn(1);
  print_combn(2);
  print_combn(3);
  print_combn(4);
  print_combn(5);
  print_combn(6);
  print_combn(7);
  print_combn(8);
  print_combn(9);
  */
  return 0;
}
