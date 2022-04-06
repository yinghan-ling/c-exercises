#include<stdio.h>
int main (int argc, char* argv[]) {
    int i = 1;
    int c;
    int n1;
    int n2;
    int n3;
    int s;
    scanf("%d", &c);
    while (i <= c){
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 < n2)
        {
            if (n2 < n3){
                s = n2;
            }
            else if (n1 < n3){
                s = n3;
            }
            else {
                s = n1;
            }
        }
        else if (n1 < n3){
            s = n1;
        }
        else if (n2 < n3){
            s = n3;
        }
        else {
            s = n2;
        }
        printf("Case %d: %d\n", i, s);
        i = i + 1;
    }

    

    return 0;
}