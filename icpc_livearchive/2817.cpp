#include <cstdio>
#include <cstring>
#define MAX 30000

int main() {
    int contaminado[MAX], grupos[MAX][MAX];
    int n, m, gzero, k, i, j, l, count;
    scanf("%d %d", &n, &m);
    while (n != 0 || m != 0) {
        //memset(contaminado,0,sizeof(contaminado));
        //memset(grupos,-1,sizeof(grupos));
        count = 0;
        for (i = 0; i < m; i++) {
            scanf("%d", &k);
            for (j = 0; j < k; j++) {
                scanf("%d",&grupos[i][j]);
                if (grupos[i][j] == 0)
                    gzero = i;
            }
        }
        contaminado[0] = 1;
        i = 0;
        while (grupos[gzero][i] != -1) {
            contaminado[grupos[gzero][i]] = 1;
            i++;
        }
        for (i = 0; i < n; i++) {
            if (contaminado[i]) {
                for (j = 0; j < n; j++) {
                    for (m = 0; m < k; m++) {
                        if (grupos[j][m] == i) {
                            l = 0;
                            while (grupos[j][l] != -1) {
                                contaminado[grupos[j][l]];
                                l++;
                            }
                        }
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            if (contaminado[i])
                count++;
        }
        scanf("%d %d",&n,&m);
    }
    return 0;
}
