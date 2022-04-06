#include <stdio.h>
#define NUM 5
int main(int argc, char *argv[])
{
	printf("Please create a sequence with %d numbers:\n", NUM);
	int count [NUM];
	int n = 0;
	int i = 0;
	for (i = 0; i < NUM; i++)
	{
		scanf("%d", &count[i]);
	}
	for (i = NUM - 1; i >= 0; i--)
	{
		if (count[i] == 0)
		{
			n= n + 1;
		}
	}
	printf("The number of zero in this sequence is %d.\n", n);
	return 0;
}
