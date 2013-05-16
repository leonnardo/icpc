#include <cstdio>
#include <cstring>

int main(int argc, const char *argv[])
{
    int ages[101],n,i,aux,flag;
    scanf("%d",&n);
    while (n != 0) {
        memset(ages,0,sizeof(ages));
        for (i = 1; i <= n; i++) {
            scanf("%d",&aux);
            ages[aux] += 1;
        }
        flag = 0;
        for (i = 1; i <= 100; i++) {
            if (ages[i]) {
                while (ages[i]) {
                    if (flag) printf(" ");
                    printf("%d",i);
                    ages[i]--;
                    flag++;
                }
            }
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}
