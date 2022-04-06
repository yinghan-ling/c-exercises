#include <stdio.h>
#define NUM 5
int main ()
{
	int numbers[NUM] = {4, 5, 9, 10, -1};
	int accumulate[NUM] = {0};
	accumulate[0] = numbers[0];
	for (int i = 1; i < NUM; i++)
	{
		accumulate[i] = accumulate[i - 1] + numbers[i];
		printf("%d ", accumulate[i]);
	}
	return 0;
}
