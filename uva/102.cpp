#include <cstdio>
// soma todos os elementos do vetor exceto os elementos a, b e c
int soma(int v[], int a, int b, int c) {
    int res = 0, i;
    for (i = 0; i < 9; i++) {
        if (i != a && i != b && i != c)
            res += v[i];
    }
    return res;
}

int main() {
    int combinacao[6],leitura[9],min,i;
    while (scanf("%d", &leitura[0]) != EOF) {
        for (i = 1; i < 9; i++)
            scanf("%d", &leitura[i]);
        // BCG
        combinacao[0] = soma(leitura,0,5,7);
        // BGC
        combinacao[1] = soma(leitura,0,4,8);
        // CBG
        combinacao[2] = soma(leitura,2,3,7);
        // CGB
        combinacao[3] = soma(leitura,2,4,6);
        // GBC
        combinacao[4] = soma(leitura,1,3,8);
        // GCB
        combinacao[5] = soma(leitura,1,5,6);
        min = 0;
        for (i = 1; i < 6; i++) {
            if (combinacao[i] < combinacao[min])
                min = i;
        }
        switch (min) {
            case 0:
                printf("BCG ");
                break;
            case 1:
                printf("BGC ");
                break;
            case 2:
                printf("CBG ");
                break;
            case 3:
                printf("CGB ");
                break;
            case 4:
                printf("GBC ");
                break;
            case 5:
                printf("GCB ");
                break;
        }
        printf("%d\n", combinacao[min]);
    }
    return 0;
}
