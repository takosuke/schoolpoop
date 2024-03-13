#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

void format_print(int a[], int is_end){
  putchar(a[0]);
  putchar(a[1]);
  putchar(a[2]);
  if(is_end == 0)
  {
    putchar(',');
    putchar(' ');
  } else {
    putchar('\n');
  }
}

void print_comb(){

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
