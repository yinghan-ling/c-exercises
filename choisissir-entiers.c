#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (int argc, char* argv[]) {
    srand(time(NULL));
// set a different start for each rand() according to the current time, so the rand numbers won't be the same each time we run the program.
    int r1 = rand () % 10;
    int r2 = rand () % 10;
    int r3 = rand () % 10;
    printf("Please type a number:\n");
    int n;
    scanf("%d", &n);
    int score = 0;
    if (n != r1 && n != r2 && n != r3)
    {
        score = score + 1;
    }
    if (n > r1 || n > r2 || n > r3) {
        score = score + 2;
    }
    printf("%d, %d, %d,\n", r1, r2, r3);
    printf("You have gained %d point(s)", score);
    return 0;
}