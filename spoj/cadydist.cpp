#include <cstdio>
#include <algorithm>
#define MAX 100000
using namespace std;

int main() {
    long long int N, classes[MAX], prices[MAX];
    long long int i,soma;
    scanf("%lld",&N);
    while (N != 0) {
        for (i = 0; i < N; i++)
            scanf("%lld",&classes[i]);
        for (i = 0; i < N; i++)
            scanf("%lld", &prices[i]);
        sort(classes,classes+N);
        sort(prices,prices+N);
        reverse(prices,prices+N);
        soma = 0;
        for (i = 0; i < N; i++) 
            soma += classes[i]*prices[i];
        printf("%lld\n",soma);
        scanf("%lld",&N);
    }
    return 0;
}
