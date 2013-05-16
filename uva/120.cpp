#include <cstdio>
#include <cstring>
#include <cstdlib>

void flip(int v[],int pos,int n) {
    int swap;
    int aux = n - pos;
    for (int i = 0; i <= aux/2; i++) {
        swap = v[i];
        v[i] = v[aux-i];
        v[aux-i] = swap;
    }
}
int main() {
    int stack[30],aux,n;
    char linha[150];
    char *pch;
    while (scanf(" %[^\n]s", linha) != EOF) {
        n = 0;
        pch = strtok(linha," ");
        while (pch) {
            stack[n] = atoi(pch);
            n++;
            pch = strtok(NULL, " ");
        }
        /* imprime o vetor */
        for (int i = 0; i < n; i++) {
            if (i != n-1)
                printf("%d ", stack[i]);
            else
                printf("%d\n", stack[i]);
        }
        /* pancake sort */
        int j = 1;
        for (int i = 0; i < n; i++) {

        }
    }
    return 0;

}
