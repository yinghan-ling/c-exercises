#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_GUESS 1001
#define NUMBER_GUESS 3
int ask_user_integer ()
{
	printf("Vous pouver deviner un nombre entre 0 et 1000:\n");
	int guessed;
	scanf("%d", &guessed);
	return guessed;
}
int generate_number()
{
	int expected = rand () % MAX_GUESS;
	return expected;
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
	while (has_won(game_result)== 0)
	{
		printf("%d\n", game_result);
		m = ask_user_integer();
		game_result = compare_number(n, m);
	}
	printf("%d\n", has_won(game_result));
	return 0;
}
