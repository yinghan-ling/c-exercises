#include <stdio.h>
int main (int argc, char* argv[])
{
  int n;
  int N;
  int M;
  int x;
  int y;
  int i = 1;
  scanf("%d", &n);
  while (n != 0)
  {
    scanf("%d %d", &N, &M);
    while (i <= n)
    {
      scanf("%d %d", &x, &y);
      if (x - N == 0 || y - M == 0)
      {
        printf("divisa\n");
      }
      else if (x - N > 0)
      {
        if (y - M > 0)
        {
          printf("NE\n");
        }
        else 
        {
          printf("SE\n");
        }
      }
      else if(y - M > 0)
      {
        printf("NO\n");
      }
      else
      {
        printf("SO\n");
      }
      i = i + 1;
    }
    scanf("%d", &n);
    i = 1;
  }
  return 0;
}