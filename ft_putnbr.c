#include <unistd.h>


void ft_putchar(int c){

  write(1, &c, 1);
}

void ft_putnbr(int n)
{
  int numchar;
  char numstring[11];
  int index = 10;

  while(n > 0)
  {
    numchar = (n % 10) + 48;
    numstring[index] = numchar;
    index--;
    n = n/10;
  }
  printf("\n %d \n", index);
  while(index < 11)
  {
    putchar(numstring[index]);
    index++;
  }
    
}

int main()
{
  int a;
  a = 5321245;
  ft_putnbr(a);
  return 0;
}
