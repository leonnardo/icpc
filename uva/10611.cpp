#include <cstdio>
#include <cstdlib>
#define MAX 50000

int main(int argc, const char *argv[])
{
    int heights[MAX];
    int n, q, aux, i, achou_menor, achou_maior;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        scanf("%d",&heights[i]);
    scanf("%d",&q);
    while (q--) {
        scanf("%d",&aux);
        achou_menor = 0;
        achou_maior = 0;
        i = 0;
        while (i < n && heights[i] < aux)
            i++;
        if (heights[i-1] < aux)
            achou_menor = heights[i-1];
        i = n-1;
        while (i >=0 && heights[i] > aux)
            i--;
        if (heights[i+1] > aux)
            achou_maior = heights[i+1];
        if (achou_menor)
            printf("%d ",achou_menor);
        else
            printf("X ");
        if (achou_maior)
            printf("%d\n",achou_maior);
        else
            printf("X\n");
    }
    return 0;
}
