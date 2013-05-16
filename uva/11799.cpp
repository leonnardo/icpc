#include <cstdio>

int main() {
    int mx, t, n, ax, cnt = 1;
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        mx = 0;
        while (n--) {
            scanf("%d",&ax);
            if (ax > mx)
                mx = ax;
        }
        printf("Case %d: %d\n",cnt,mx);
        cnt++;
    }
    return 0;
}
