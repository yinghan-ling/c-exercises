#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_GUESS 1001
#define NUMBER_GUESS 3
int main (int argc, char* argv[]) {
	srand(time(NULL));
	int n = rand () % MAX_GUESS;
	printf("Vous avez %d fois pour deviner un nombre entre 0 et 1000:\n", NUMBER_GUESS);
	int m;
	int t = 1;
	scanf("%d", &m);
	while (m != n && t < NUMBER_GUESS){
		if (m < n){
			printf("Votre devinette est trop petite.\n");
		}
		else {
			printf("Votre devinette est trop grande.\n");
		}
		t = t + 1;
		printf("resaisissez un autre nombre:\n");
		scanf("%d", &m);
	}
	if (m == n)
	{
		printf("Le nombre est %d.\n", n);
		printf("Bravo! C'est correct!\n");
	}
	else
	{
		printf("Dommage! Vous avez utilisé tout les essais. Le nombre est %d.\n", n);
	}
	return 0;
}
