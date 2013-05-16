#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n, j, z, i, t = 1, soma_j, soma_z;
    scanf("%d", &n);
    while(n > 0) { 
        soma_j = 0;
        soma_z = 0;
        printf("Teste %d\n", t);
        for (i = 0; i < n; i++) {
            scanf("%d %d", &j, &z);
            soma_j += j;
            soma_z += z;
            printf("%d\n", soma_j-soma_z);
        }
        t++;
        scanf("%d", &n);
    }
    return 0;
}
