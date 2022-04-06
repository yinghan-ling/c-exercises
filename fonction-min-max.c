 #include <stdio.h>
#define NUMBER_INPUT 5

int min(int x, int y)
{
	if (x >= y)
	{
		return y;
	}
	else 
	{
		return x;
	}
}
int max(int x, int y)
{
	if (x >= y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	int input[NUMBER_INPUT] = {0};
	printf("Insère 5 entiers:\n");
	for (int i = 0; i < NUMBER_INPUT; i++)
	{
		scanf("%d", &input[i]);
	}
	int minimum = input[0];
	int maxinum = input [0];
	for (int i = 1; i < NUMBER_INPUT; i++)
	{
		minimum = min(minimum, input[i]);
		// int x = minimum;
		// int y = input[i];
		// if (x >= y)
		// {
		// 	minimum = y;
		// }
		// else 
		// {
		// 	minimum = x;
		// }
		maxinum = max(maxinum, input[i]);
	}
	printf("Le plus petit est %d.\n", minimum);
	printf("Le plus grand est %d.\n", maxinum);
	return 0;
}
