#include <cstdio>
#define MAX 1000
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int t, n, g, soma, i, j, k;
    int group[MAX], price[MAX], weight[MAX];
    int res[MAX][MAX];
    scanf("%d",&t);
    while (t--) {
        soma = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d %d",&price[i],&weight[i]);
        scanf("%d",&g);
        for (i = 0; i < g; i++)
            scanf("%d",&group[i]);
        for (k = 0; k < g; k++)  {
            for (i = 0; i < group[k]; i++)
                res[0][i] = 0;
            for (i = 0; i < n; i++) {
                for (j = 0; j < group[k]; j++) {
                    if (j >= weight[i]) 
                        res[i][j] = max(res[i-1][j],res[i-1][j-weight[i]]+price[i]);
                    else
                        res[i][j] = res[i-1][j];
                }
            }
            soma += res[n-1][group[k]-1];
        }
        printf("%d\n",soma);
    }
    return 0;
}
