#include <stdio.h>
#define max_score 20
#define min_score 0
int main(int argc, char *argv[])
{
	printf("Comment avez-vous obtenu au dernier examen?\n");
	int score;
	scanf("%d", &score);
	printf("%d\n", score);
	while (score < min_score || score > max_score) {
		printf("Tu délires mon pote ! Essaye encore pour voir: ");
		scanf("%d", &score);
	}
	if (score < 10) {
		printf("Echec\n");
	}
	else if (score >= 10 && score < 12) {
		printf("Peut mieux faire\n");
	}
	else if (score >= 12 && score < 14) {
		printf("Presque bien\n");
	}
	else if (score >=14 && score < 17) {
		printf("Bien\n");
	}
	else if (score >= 17) {	
		printf("Avez-vous une vie?\n");
	}
	return 0;
}