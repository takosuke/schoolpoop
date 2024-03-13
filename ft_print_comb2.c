#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
  write(1, &c, 1);
}

void format_print(int a[], int b[], int is_end){
  putchar(a[0]);
  putchar(a[1]);
  
  putchar(' ');

  putchar(b[0]);
  putchar(b[1]);

  if(is_end == 0)
  {
    putchar(',');
    putchar(' ');
  } else {
    putchar('\n');
  }
}



void print_comb2(){
  int a[2];
  int b[2];
  int is_end;

  a[0] = a[1] = b[0] = b[1] = '0';
  is_end = 0;


  while(a[0] <= '9')
  {
    while(a[1] <= '9')
    {
      while(b[0] <= '9')
      {
        while(b[1] <= '9')
        {
          if (a[0] == '9' && a[1] == '9' && b[0] == '9' && b[1] == '9')
          {
            is_end = 1;
          }
            
          format_print(a, b, is_end);
          b[1]++;
        }
        b[0]++;
        b[1] = '0';
      }
      a[1]++;
      b[0] = '0';
    }
    a[0]++;
    a[1] = '0';
  }

}

int main(){
  print_comb2();
  return 0;
}
