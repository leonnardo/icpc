#include <cstdio>
#include <algorithm>
#define MAX 5000
using namespace std;
int main(int argc, const char *argv[])
{
    int n;
    int jolly[MAX], diff[MAX];
    int i;
    int is_jolly;
    while (scanf("%d",&n) != EOF) {
        for (i = 0; i < n; i++)
            scanf("%d",&jolly[i]);
        for (i = 1; i < n; i++) {
            if (jolly[i] > jolly[i-1])
                diff[i-1] = jolly[i]-jolly[i-1];
            else 
                diff[i-1] = jolly[i-1]-jolly[i];
        }
        sort(diff,diff+(n-1));
        i = 0;
        is_jolly = 1;
        
        while (is_jolly && i < n-1) {
            if (diff[i] != i+1)
                is_jolly = 0;
            else
                i++;
        }
        if (is_jolly)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
