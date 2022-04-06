#include <stdio.h>
int main (int argc, char* argv[])
{
	int n = 1;
	float d;
	int H;
	int U;
	int D;
	float F;
	scanf("%d", &H);
	while (H != 0)
	{
		scanf("%d %d %f", &U, &D, &F);
		//%f is for float.
		d = U - D;
		while (d + D <= H && d >= 0)
		{
			n = n + 1;
			if ((n-1) * (F/100.0) < 1)
			{
				d = d + U - (n-1)* (F/100.0) * U - D;
			}
			else 
			{
				d = d - D;
			}
			//printf("%f %d\n", d, n);
		}
		if (d <= 0)
		{
			printf("failure on day %d\n", n);
		}
		else 
		{
			printf("success on day %d\n", n);
		}
		scanf("%d", &H);
		n = 1;
	}
	return 0;
}
