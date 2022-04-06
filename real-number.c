#include <stdio.h>
int main(int argc, char *argv[])
{
  printf("Please type the first number:\n");
  float n1;
  scanf("%f", &n1);
  printf("Please type the second number:\n");
  float n2;
  scanf("%f", &n2);
  if (n1 == n2){
    printf("These two number are equal.\n");
  }
  else if (n1 < n2) {
    printf("%f is the smaller one while %f is the bigger one.", n1, n2);
  }
  else {
    printf("%f is the bigger one while %f is the smaller one.", n1, n2);
  }
  return 0;
}