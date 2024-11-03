#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int tmp;
  
  tmp = *a;
  *a = *b;
  *b = tmp;
  printf("a = %d\n", *a);
  printf("b = %d", *b);

}


int main() {

  int a = 5;
  int b = 7;

ft_swap(&a, &b);

 return 0;
 }
