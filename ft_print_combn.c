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

  int is_end;

  is_end = 0;

  int i[] = {'0', '1', '2'};
  while(i[0] <= '7'){

    while(i[1] <= '9'){
      
      while(i[2] <= '9'){
        if(i[0] == '7' && i[1] == '8' && i[2] == '9'){
          is_end = 1;
        }
        format_print(i, is_end);
        i[2]++;
      }
      i[2] = ++i[1] + 1;
    }
    i[1] = ++i[0];
  }
}

int main(){
  print_comb();
  return 0;
}
