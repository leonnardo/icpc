#include <cstdio>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct letra {
    char lt;
    int cnt;
} letra;

bool compara(letra a, letra b) {
    if (a.cnt == b.cnt)
        return a.lt < b.lt;
    return a.cnt > b.cnt;
}

int main() {
    int n;
    letra ordenado[32];
    for (int i = 'A'; i <= 'Z'; i++) {
        ordenado[i - 'A'].lt = i;
        ordenado[i - 'A'].cnt = 0;
    }

    scanf("%d\n",&n);
    while (n--) {
        //scanf(" %[^\n]s",line);
        char c;
        while (scanf("%c",&c) == 1 && c != '\n') {
            if (isalpha(c)) {
                if (islower(c))
                    c = toupper(c);
                ordenado[c - 'A'].cnt++;
            }
        }
    }
    sort(ordenado,ordenado+26,compara);
    for (int i = 'A'; i <= 'Z'; i++) {
        if (ordenado[i - 'A'].cnt != 0)
            printf("%c %d\n",ordenado[i - 'A'].lt,ordenado[i - 'A'].cnt);
    }

    return 0;
}
