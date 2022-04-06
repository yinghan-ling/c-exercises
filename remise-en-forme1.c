#include <stdio.h>
int main(int argc, char* argv[])
{
  printf("Décidez la hauteur du triangle rectangle:\n");
  int h;
  int i = 1;
  int n = 0;
  scanf("%d", &h);
  while(i <= h)
  {
    while(n < i)
    {
      printf("*");
      n = n + 1;
    }
    printf("\n");
    i = i + 1;
    n = 0;
  }
  return 0;
}
