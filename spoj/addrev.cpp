#include <cstdio>

int main() {
    int N, a, b, x, y, sum, res;
    while (scanf("%d", &N) != EOF) {
        while (N--) {
            scanf("%d %d", &a, &b);
            x = 0; y = 0; res = 0 ;
            while (a != 0) {
                x += a%10;
                if (a < 10)
                    break;
                else {
                    x *= 10;
                    a /= 10;
                }
            }
            while (b != 0) {
                y += b%10;
                if (b < 10)
                    break;
                else {
                    y *= 10;
                    b /= 10;
                }
            }
            sum = x+y;
            while (sum != 0) {
                res += sum%10;
                if (sum < 10)
                    break;
                else {
                    res *= 10;
                    sum /= 10;
                }
            }
            printf("%d\n", res);
        }
    }
    return 0;
}