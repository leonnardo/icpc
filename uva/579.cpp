#include <cstdio>
#include <cmath>

int main(int argc, const char *argv[]) {
    double res, h, m;
    while (scanf("%lf:%lf",&h,&m) == 2 && (h != 0 || m != 0)) {
        res = (fabs(60*h - 11*m)/2);
        if (res > 180.0)
            res = 360.0 - res;
        printf("%.3lf\n",res);
    }
    return 0;
}
