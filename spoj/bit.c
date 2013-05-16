#include <stdio.h>

int main(int argc, const char *argv[])
{
    int troco;
    int t = 1;
    
    scanf("%d", &troco);
    while (troco > 0) {
        printf("Teste %d\n", t);
        printf("%d ", troco/50);
        troco = troco%50;
        printf("%d ", troco/10);
        troco = troco%10;
        printf("%d ", troco/5);
        troco = troco%5;
        printf("%d\n", troco);
        scanf("%d", &troco);
        t++;
    }
    return 0;
}
