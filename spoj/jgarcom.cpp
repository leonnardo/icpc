#include <cstdio>

int main(int argc, const char *argv[])
{
    int n, C, L, quebrados;
    quebrados = 0;
    scanf("%d",&n);
    while (n--) {
        scanf("%d %d",&L,&C);
        if (L > C)
            quebrados += C;
    }
    printf("%d\n",quebrados);
    return 0;
}
