#include <cstdio>
#include <cstring>
#define SIZE 1000000

int main(int argc, const char *argv[]) {
    char s[SIZE], t[SIZE];
    int i,j, s_size, t_size,flag,count,aux,achou;
    while (scanf("%s %s",s,t) != EOF) {
        s_size = strlen(s);
        t_size = strlen(t);
        count = 0;
        aux = 0;
        flag = 1;
        while (flag == 1 && count < s_size) {
            achou = 0;
            for (i = aux; i < t_size; i++) {
                if (s[count] == t[i]) {
                    achou = 1;
                    aux = i+1;
                    count++;
                    break;
                }
            }
            if (achou == 0)
                flag = 0;
        } 
        if (flag == 1)
            printf("Yes\n");
        else 
            printf("No\n");
    }
    return 0;
}
