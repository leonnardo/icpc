#include <cstdio>

int main(int argc, const char *argv[])
{
    int diametro,altura,largura,profundidade;
    scanf("%d",&diametro);
    scanf("%d %d %d",&altura,&largura,&profundidade);
    if (largura >= diametro && altura >= diametro && profundidade >= diametro)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
