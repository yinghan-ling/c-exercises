#include <stdio.h>
#define NAME_MAX 50
int main ()
{
	printf("Insère une chaine de caractère:\n");
	int i = 0;
	char array[NAME_MAX];
	fgets(array, sizeof(array), stdin);
	while (i < NAME_MAX && array[i] != '\0')
	{
		i = i + 1;
	}
	if (i == 49)
	{
		printf("La longueur de la chaine est 49.");
	}
	else
	{
		printf("La longuer de la chaine est %d.", i-1);
	}
	while (i >= 0)
	{
		printf("%c", array[i]);
		i = i - 1;
	}
	printf("\n");

	return 0;
}
