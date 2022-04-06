# include <stdio.h>
int main (int argc, char* argv[]){
	printf("Choisir un entier plus que 0:\n");
	int n;
	scanf("%d", &n);
	int i = 1;
	while (i <= n) {
		printf("%d\n", i);
		i = i + 1;
	}
	return 0;

}