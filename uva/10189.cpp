#include <cstdio>
#define MAX 128
int main() {
    int m, n, i, j, cnt = 0;
    char field[MAX][MAX];
    int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    while (scanf("%d %d",&m,&n) == 2 && m && n) {
        if (cnt > 0) printf("\n");
        cnt++;
        for (i = 0; i <= n+1; i++) {
            field[0][i] = '.';
            field[m+1][i] = '.';
        }
        for (i = 0; i <= m+1; i++) {
            field[i][0] = '.';
            field[i][n+1] = '.';
        }
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                scanf(" %c",&field[i][j]);
            }
        }
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                if (field[i][j] !=  '*') {
                    field[i][j] = '0';
                    for (int k = 0; k < 8; k++) {
                        if (field[i+dx[k]][j+dy[k]] == '*')
                            field[i][j]++;
                    }
                }

            }
        }
        printf("Field #%d:\n", cnt);
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                printf("%c",field[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
