#include <cstdio>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    while (n != 0) {
        printf("%d\n",(2*n+1)*(n+1)*n/6);
        scanf("%d", &n);
    }
    return 0;
}