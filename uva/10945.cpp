#include <cstdio>
#include <cstring>
#include <cctype>

void le_string(char cadeia[]) {
    char c;
    int i = 0;
    scanf("%c", &c);
    while (c != '\n') {
        if (c != '!' && c != '?' && c != '.' && c != ',' && c != ' ') {
            cadeia[i] = c;
            i++;
        }
        scanf("%c", &c);
    }
    cadeia[i] = '\0';
}

void zera_string(char cadeia[]) {
    for (int i = 0; i < 500; i++)
        cadeia[i] = '\0';
}

int main(int argc, const char *argv[])
{
    
    int i;
    char leitura[500], str1[500], str2[500], aux[500];
    le_string(leitura);
    while (strcmp(leitura, "DONE") != 0) {
        zera_string(str1);
        zera_string(str2);
        zera_string(aux);
        if (strlen(leitura)%2 == 0) {
            strncpy(str1, leitura, strlen(leitura)/2);
            strncpy(str2, leitura+strlen(leitura)/2, strlen(leitura)/2);
        }
        else {
            strncpy(str1, leitura, strlen(leitura)/2);
            strncpy(str2, leitura+(strlen(leitura)/2)+1, strlen(leitura)/2);
        }

        // reverse str2
        for (i = 0; i < strlen(str2); i++) 
            aux[i] = str2[strlen(str2)-1-i];
        for (i = 0; i < 500; i++) {
            str1[i] = tolower(str1[i]);
            aux[i] = tolower(aux[i]);
        } 
        
        if (strcmp(str1, aux) == 0) 
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");

        
        le_string(leitura);
    }
    return 0;
}
