#include <unistd.h>

int main(){
  int a[3];
  a[0] = a[1] = a[2] = '0';
  char nl = '\n';

  a[0]++;
  write(1, &a[0], 1);
  write(1, &nl, 1);
  write(1, &a[1], 1);
  write(1, &nl, 1);
  write(1, &a[2], 1);
  write(1, &nl, 1);
  return 0;
}
