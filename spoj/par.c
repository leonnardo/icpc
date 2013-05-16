#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, n, t = 1, a, b;
    char jogadorA[11], jogadorB[11];
    scanf("%d", &n);
    while (n > 0) {
        scanf("%s", jogadorA);
        scanf("%s", jogadorB);
        printf("Teste %d\n", t);
        for (i = 0; i < n; i++) {
            scanf("%d %d", &a, &b);
            if ((a+b) % 2 == 0) 
                printf("%s\n", jogadorA);
            else 
                printf("%s\n", jogadorB);
        }
        t++;
        scanf("%d", &n);

    }
    return 0;
}
