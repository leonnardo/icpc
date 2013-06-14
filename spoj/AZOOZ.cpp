#include <cstdio>

int main(int argc, const char *argv[])
{
    int teste, n, T;
    scanf("%d",&T);
    for (teste = 1; teste <= T; teste++) {
        scanf("%d",&n);
        printf("Case #%d: %d\n",teste,3*(n*(n+1)/2));
    }
    
    return 0;
}
