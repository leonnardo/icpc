#include <cstdio>
#include <cstdlib>
#define MAX 182
int main() {
    char bitmap[MAX][MAX],input[MAX];
    int t,n,m,i,j,k,l,min,dist,wbmp[MAX][2];
    scanf("%d",&t);
    while (t--) {
        scanf("%d %d",&n,&m);
        k = 0;
        for (i = 0; i < n; i++) {
            scanf("%s",input);
            for (j = 0; j < m; j++) {
                bitmap[i][j] = input[j];
                if (input[j] == '1') {
                    wbmp[k][0] = i;
                    wbmp[k][1] = j;
                    k++;
                }
                
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (j) printf(" ");
                if (bitmap[i][j] == '1')
                    printf("0");
                else {
                    min = 100000;
                    for (l = 0; l < k; l++) {
                        dist = abs(i-wbmp[l][0]) + abs(j-wbmp[l][1]);
                        if (dist < min)
                            min = dist;
                    }
                    printf("%d",min);
                }
            }
                printf("\n");
        }
    }
    return 0;
}
