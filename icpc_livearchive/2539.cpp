#include <cstdio>
#include <algorithm>

using namespace std; 

struct aresta {
    int orig, dest, peso;    
};

/* código mais porco do universo */
int parent[27];
void MakeSet() {
    for (int i = 0; i < 27; i++)
        parent[i] = i;
}

int find(int i) {
    if (parent[i] == i)
        return i;
    return find(parent[i]);
}

void uniao(int x, int y) {
    int xroot = find(x);
    int yroot = find(y);
    parent[xroot] = yroot;
}

bool compara(struct aresta a, struct aresta b) {
    return a.peso < b.peso;
}


int main(int argc, const char *argv[])
{
    int n, size;
    struct aresta arestas[128];
    while (scanf(" %d",&n) == 1 && n) {
        size = 0;
        for (int i = 0; i < n-1; i++) {
            char c;
            int m;
            scanf(" %c %d",&c,&m);
            for (int j = 0; j < m; j++) {
                int peso;
                char dest;
                scanf(" %c %d",&dest,&peso);
                arestas[size].orig = c - 'A';
                arestas[size].dest = dest - 'A';
                arestas[size++].peso = peso;
            }
        }
        sort(arestas,arestas+size,compara);
        // KRUSKAL AI PRA NÓIS
        int custo = 0;
        MakeSet();
        for (int i = 0; i < size; i++) {
            if (find(arestas[i].orig) != find(arestas[i].dest)) {
                custo += arestas[i].peso;
                uniao(arestas[i].orig,arestas[i].dest);
            } 
        }
        printf("%d\n",custo);
    }
    return 0;
}
