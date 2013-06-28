#include <cstdio>

int main(int argc, const char *argv[])
{
    int n, attempts, hits;
    int alphabet[26];
    int contestant[26];
    char ax;
    bool flag;
    while (scanf("%d",&n) && n != -1) {
        attempts = 0;
        hits = 0;
        flag = false;
        for (int i = 0; i < 26; i++) {
            alphabet[i] = 0;
            contestant[i] = 0;
        }
        
        getchar();
        while (scanf("%c",&ax) == 1 && ax != '\n') {
            if (!alphabet[ax - 'a'])
                hits++;
            alphabet[ax - 'a']++;
            
        }
        
        while (scanf("%c",&ax) == 1 && ax != '\n') {
            if (alphabet[ax - 'a'] > 0 && attempts < 7) {
                alphabet[ax - 'a'] = -2;
                hits--;
            }
            else if (hits > 0 && alphabet[ax - 'a'] == 0) {
                attempts++;
                alphabet[ax - 'a'] = -1;
            }
        }

        if (hits == 0) flag = true;
        
        printf("Round %d\n",n);
        if (flag) printf("You win.\n");
        else if (attempts < 7) printf("You chickened out.\n");
        else printf("You lose.\n");
    }
    return 0;
}
