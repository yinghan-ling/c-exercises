#include <stdio.h>
int main (int argc, char* argv[]) {
	printf("Décider deux entiers n pour la largeur et m pour le longueur du rectangle:\n");
	int n;
	int m;
	scanf("%d %d", &n, &m);
	int i1 = 0;
	int i2 = 0;
	while (i1 < n) {
		while (i2 < m){
			printf ("*");
			i2 = i2 + 1;
		}
		printf("\n");
		i1 = i1 + 1;
		i2 = 0;
	}
	return 0;
}