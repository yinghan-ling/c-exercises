#include <stdio.h>
#define X -1
#define NOM 3
int main()
{
	int count [NOM] = {0};
	int n = 0;
	printf("Please insert a sequence of %d integers:\n", NOM);
	for (int i = 0; i < NOM; ++i)
	{
		scanf("%d", &count[i]);

	}
	for (int i = 0; i < NOM; ++i)
	{
		if (count[i] == X)
		{
			n = n + 1;
		}
	
	}
	printf("There are %d %d in this sequence.\n", n, X);
	return 0;
}
