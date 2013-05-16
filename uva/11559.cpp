#include <cstdio>

int main() {
    int n, b, h, w, price, beds, mn, ax;
    bool go;
    while (scanf("%d %d %d %d",&n,&b,&h,&w) == 4) {
        mn = 6000000;
        for (int i = 0; i < h; i++) {
            scanf("%d",&price);
            for (int j = 0; j < w; j++) {
                scanf("%d",&ax);
                if (ax >= n && n*price < mn) {
                    mn = n*price;
                }
            }
        }
        if (mn > b) printf("stay home\n");
        else printf("%d\n",mn);
    }
    return 0;
}
