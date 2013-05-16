#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
    int m, n, i;
    int pontuacao[10500];
    while (scanf("%d %d", &n, &m) != EOF) {
        for (i = 0; i < n; i++)
            scanf("%d", &pontuacao[i]);
        sort(pontuacao, pontuacao+i);
        while((m--)+1) {
            printf("%d\n", pontuacao[n]);
            n--;
        }        
    }
    return 0;
}
