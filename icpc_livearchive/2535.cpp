#include <cstdio>

int main(int argc, const char *argv[])
{
    int T, i, j, k, soma_s, soma_e, flag;
    int almondegas[40];
    scanf("%d", &T);
    while (T != 0) {
        flag = 0;
        
        for (i = 0; i < T; i++) 
                scanf("%d", &almondegas[i]);
        
        k = 1;
        while (k < T && flag == 0) {
            soma_s = 0;
            soma_e = 0;
            for (i = 0; i < k; i++) 
                soma_s += almondegas[i]; 
            for (j = k; j < T; j++) 
                soma_e += almondegas[j];
            
            if (soma_s == soma_e) 
                flag = 1;
            
            k++;
        }
        
        if (flag == 1) 
            printf("Sam stops at position %d and Ella stops at position %d.\n", i, i+1);
        else
            printf("No equal partitioning.\n");
          
           
        scanf("%d", &T);
    }
    return 0;
}
