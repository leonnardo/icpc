#include <cstdio>
#define MAX 30150

int main(int argc, const char *argv[])
{
    int pint, pcent;
    int moedas[] = { 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };
    unsigned long long c[MAX];
    c[0] = 1;
    for (int i = 1; i < MAX; i++)
        c[i] = 0;

    for (int j = 0; j < 11; j++) 
        for (int i = 0; i < MAX; i++) 
            if (i >= moedas[j])
                c[i] += c[i - moedas[j]];
    while(scanf("%d.%d", &pint, &pcent) == 2 && (pint || pcent))
        printf("%3d.%.2d%17llu\n",pint,pcent,c[100*pint+pcent]);

    return 0;
}
