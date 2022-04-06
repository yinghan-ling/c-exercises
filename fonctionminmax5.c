#include <stdio.h>
#define NUMBER_INPUT 5
int min()
{
	int input[NUMBER_INPUT]{0};
	for (int i = 0; i < NUMBER_INPUT; i++)
	{
		scanf("%d", &input[i]);
	}
	int x = intput[0];
	for (i = 0; i < NUMBER_INPUT; i++)
	{
		if (x > input[i + 1])
		{
			x = input[i + 1];
		}
		i = i + 1;
	}
	return x;

}
int max()
{
	int input[NUMBER_INPUT]{0};
	for (int i = 0; i < NUMBER_INPUT; i++)
	{
		scanf("%d", &input[i]);
	}
	int x = input[0];
	for (i = 0; i < NUMBER_INPUT; i++)
	{
		if (x < input[i + 1])
		{
			x = input[i + 1];
		}
		i = i + 1;
	}
	return x;
}

int max(int x, int y)

int main()
{
	printf("Insérez 5 entiers:\n");
	max()
	int y = min(9, 100, 0, 3, 4);
	printf("Le plus petit est  %d\n", y);
	return 0;
}
