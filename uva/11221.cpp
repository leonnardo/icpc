#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>

int main(int argc, const char *argv[])
{
    int n, i, test = 1;;
    char sentence[10500];
    char c;
    bool magic;
    scanf("%d\n",&n);
    while (n--) {
        i = 0;
        while(scanf("%c",&c) == 1 && c != '\n') {
            if (isalpha(c))
                sentence[i++] = c;
        }
        sentence[i] = '\0';
        magic = false;
        int size = strlen(sentence);
        int sqrt_test = sqrt(size);
        if (sqrt_test*sqrt_test == size) {
            i = 0;
            magic = true;
            while (i < size-i-1) {
                if (sentence[i] != sentence[size-i-1]) {
                    magic = false;
                    break; 
                }
                i++;
            }
        }
        printf("Case #%d:\n",test++);
        if (magic) printf("%d\n",sqrt_test);
        else printf("No magic :(\n");
    }
    return 0;
}
