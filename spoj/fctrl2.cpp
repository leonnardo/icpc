#include <cstdio>

int main(int argc, char const *argv[])
{
    int t,n,i;
    long long int fat[100];
    scanf("%d", &t);
    while (t--) {
        scanf("%d",&n);
        fat[0] = 1;
        fat[1] = 1;
        for (i = 2; i <= n; i++) {
            fat[i] = i*fat[i-1];
        }
        printf("%lld\n", fat[n]);
    }
    return 0;
}