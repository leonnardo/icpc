#include <stdio.h>
int main(int argc, const char *argv[])
{
    int a,b,r,t = 1, aux, aux2;
    scanf("%d", &r);
    while (r > 0) {
        a = 0;
        b = 0;
        printf("Teste %d\n", t);
        while (r) {
            scanf("%d %d", &aux, &aux2);
            a += aux;
            b += aux2;
            r--;
        }
        if (a > b)
            printf("Aldo\n");
        else
            printf("Beto\n");
        t++;
        scanf("%d", &r);
    }
    return 0;
}
