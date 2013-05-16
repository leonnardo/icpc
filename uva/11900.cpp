#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
    int t, n, p, q, i, caso, total;
    int eggs[300];
    scanf ("%d",&t);
    caso = 1;
    while (t--) {
        scanf("%d %d %d",&n,&p,&q);
        for (i = 0; i < n; i++)
            scanf("%d",&eggs[i]);
        sort(eggs,eggs+n);
        i = 0; 
        total = 0;
        int peso = 0;
        while (total < p && peso < q && i < n) {
            if (peso+eggs[i] <= q) {
                total++;
                peso += eggs[i];
            }
            i++;
        }
        printf("Case %d: %d\n",caso,total);
        caso++;
        }
    return 0;
}
