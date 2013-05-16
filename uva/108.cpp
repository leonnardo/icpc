#include <cstdio>
#include <algorithm>
using namespace std;
#define MAX 128

int main() {
    int matriz[MAX][MAX];
    int n, i, j, mx;
    while (scanf("%d",&n) != EOF) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                scanf("%d",&matriz[i][j]);
                matriz[i][j] += matriz[i-1][j];
            }
        }
        
        mx = matriz[1][1];
        for (i = 0; i < n; i++) {
            for (j = i+1; j <= n; j++) {
                int tmp = 0;
                for (int k = 1; k <= n; k++) {
                    tmp += matriz[j][k] - matriz[i][k];
                    if (tmp < 0) tmp = 0;
                    mx = max(tmp,mx);
                }
            }
        }
        printf("%d\n",mx);
    }
    return 0;
}
