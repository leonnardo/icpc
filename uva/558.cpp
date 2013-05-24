#include <cstdio>
#include <vector>

#define INF 0x3f3f3f3f
#define MAX 1024

using namespace std;

typedef struct edge {
    int dest, peso;
} edge;

edge adj[MAX][MAX];
int nadj[MAX];
int dist[MAX];

void zera() {
    for (int i = 0; i < MAX; i++)
        nadj[i] = 0;
}

int main() {
    int t, n, m, orig, dest, tam; 
    bool possible;
    scanf("%d",&t);
    while (t--) {
        possible = false;
        zera();
        scanf("%d %d",&n,&m);
        while (m--) { 
            scanf("%d %d %d",&orig,&dest,&tam);
            edge aux;
            aux.dest = dest;
            aux.peso = tam;
            adj[orig][nadj[orig]++] = aux;
        }
        // BellmanFord
        // inicializando o vetor de distancias
        for (int i = 0; i < n; i++)
            dist[i] = INF;
        dist[0] = 0;
        // relaxando as arestas
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nadj[i]; j++) {
                if (dist[i]+adj[i][j].peso < dist[adj[i][j].dest])
                    dist[adj[i][j].dest] = dist[i]+adj[i][j].peso;
            }
        }
        // checando se há ciclos negativos
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nadj[i]; j++) {
                if (dist[i] + adj[i][j].peso < dist[adj[i][j].dest])
                    possible = true;
            }
        }
        if (possible) printf("possible\n");
        else printf("not possible\n");
     }
    return 0;
}
