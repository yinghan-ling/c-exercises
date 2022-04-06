#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_GUESS 1001
#define NUMBER_GUESS 3
int ask_user_integer ()
{
	printf("Vous pouver décider un nombre entre 0 et 1000:\n");
	int expected;
	scanf("%d", &expected);
	return expected;
}
int generate_number()
{
	int guessed = rand () % MAX_GUESS;
	return guessed;
}
int compare_number(int expected, int guessed)
{
	if (guessed < expected)
	{
		return -1;
	}
	else if (guessed > expected)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int has_won(int game_result)
{
	if (game_result == 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int main (int argc, char* argv[]) 
{	
	srand(time(NULL));
	int n = generate_number();
	int m = ask_user_integer();
	int game_result = compare_number(n, m);
	printf("%d %d\n",n, m);
	printf("%d\n", game_result);
	while (has_won(game_result)== 0)
	{
		printf("%d\n", game_result);
		if (game_result == 1)
		{
			n = rand () % n;
		}
		else if (game_result == -1)
		{
			n = (rand () % (MAX_GUESS - n + 1)) + n;
		}
		game_result = compare_number(n, m);
	}
	printf("%d\n", has_won(game_result));

	return 0;

}


	 