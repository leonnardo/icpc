#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, const char *argv[])
{
    int test, r, i, sum, v;
    int s[500];
    scanf("%d", &test);
    while (test--) {
        sum = 0;
        scanf("%d", &r);
        for (i = 0; i < r; i++)
            scanf("%d", &s[i]);
        sort(s, s+i);
        if (r%2 == 1)
            v = s[(r)/2];
        else
            v = (s[r/2] + s[(r-1)/2])/2;
        for (i = 0; i < r; i++)
            sum += abs(v-s[i]);
        printf("%d\n", sum);
    }
    return 0;
}
