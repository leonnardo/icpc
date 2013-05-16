#include <cstdio>
#include <cstring>

int main(int argc, const char *argv[])
{
    int teste = 1, m, resultado, aux, i;
    char operador;
    scanf("%d", &m);

    while (m > 0) {
        scanf("%d", &resultado);
        for (i = 0; i < m-1; i++) {
            scanf("%c%d", &operador, &aux);
            if (operador == '+')
                resultado += aux;
            else if (operador == '-')
                resultado -= aux;
        }
        printf("Teste %d\n", teste);
        printf("%d\n", resultado);
        teste++;
        scanf("%d", &m);
    }
    return 0;
}
