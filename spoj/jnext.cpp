#include <cstdio>
#include <algorithm>
#define MAX 1000000

using namespace std;

int main(int argc, const char *argv[])
{
    int n[MAX], t, x, i, original, next;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &x);
        for (i = 0; i < x; i++) {
            scanf("%d", &n[i]);
        }
        
        if (next_permutation(n, n+x)) {
            for (i = 0; i < x; i++)
                printf("%d", n[i]);
        }
       
        else
            printf("-1");
        printf("\n");
    }
    return 0;
}