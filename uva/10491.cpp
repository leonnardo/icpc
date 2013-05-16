#include <cstdio>

int main(int argc, const char *argv[])
{
    double n, m, p;
    double res;
    while (scanf("%lf %lf %lf",&m,&n,&p) != EOF) {
        res = (n*(n+m-1))/((n+m)*(n+m-p-1));
        printf("%.5lf\n", res);
    }
    return 0;
}
