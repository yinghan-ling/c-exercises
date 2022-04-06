#include <stdio.h>
#define SIZE 6
void swap (int* a, int* b){
	if (*a > *b){
		int t = *a;
		*a = *b;
		*b = t;
	}
}
int main (){
	int input[SIZE] = {3, 2, 1, 6, 5, 4};
	int i = 0;
	int numbers = 1;
	while (numbers <= SIZE){
		while (i < SIZE - numbers){
			swap(&input[i], &input[i + 1]);
			i = i + 1;
		}
		numbers = numbers + 1;
		i = 0;
	}
	while(i < SIZE){
		printf("%d ", input[i]);
		i = i +1;
	}
	return 0;
}
