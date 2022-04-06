#include<stdio.h>
int main(int argc, char *argv[])
{
	int v = 0;
	printf("%d %p\n", v, (void*) &v);
	return 0;
}