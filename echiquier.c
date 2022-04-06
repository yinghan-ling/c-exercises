#include <stdio.h>
int main (int argc, char* argv[])
{
  int l = 8;
  int h = 8;
  int i = 0;
  int n = 1;
  while (n <= h)
  {
    while (i <= l)
    {
      if (n % 2 != 0){
        printf("\u25A1 \u25A0 ");
      }
      else {
        printf("\u25A0 \u25A1 ");
      }
      i = i + 2;
    }
    printf("\n");
    n = n + 1;
    i = 0;
  }
  return 0;
}
