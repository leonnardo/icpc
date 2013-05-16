/* Problema PRIMO do SPOJ
 * Link: http://br.spoj.com/problems/PRIMO/
 * 
 * Solução: Leonnardo Rabello
 * Agradecimentos a Walter Cacau, por ajudar a otimizar a solução
 */
#include <stdio.h>
#include <string.h>
#define MAX 65536
int main(int argc, const char *argv[])
{
    char notprime[MAX];
    int primes[MAX];
    int nprimes;
   
    memset(notprime, 0, sizeof(notprime));
    notprime[0] = 1;
    notprime[1] = 1;
    nprimes = 0;
    // Crivo de erastótenes
    // Seta as flags dos números que não são primos
    // E adiciona os números que são primos em um vetor
    // A busca é feita em todos os primos menores que 2^16 = 65536
    for (int i = 2; i < MAX; i++) {
        if (notprime[i] == 0) {
            primes[nprimes++] = i;
            for (int j = 2*i; j < MAX; j += i) {
                notprime[j] = 1;
            }
        }
    }
    
    int n;
    scanf("%d", &n);
    int resposta = 0;
    // Se o primo for menor que o valor MAX, basta buscar no vetor de flags
    if (n < MAX) { 
        resposta = notprime[n] == 0;
    }
    // Caso contrário, temos que testar se o número 
    // é divisivel por algum primo menor que 2^16
    else {
        for (int i = 0; i < nprimes; i++) {
            if (n%primes[i] == 0) {
                resposta = 1;
                break;
            }
        }
    }
    // printf com operador ternário, achei irado
    // tks to Walter Cacau
    printf(resposta?"sim\n":"nao\n");
    return 0;
}
