#include <cstdio>
#include <utility>
#include <queue>
#define MAX 1024

using namespace std;

int maximo, dist[MAX][MAX];
bool visit[MAX][MAX];

/* Zera as distâncias */
void zera(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dist[i][j] = 0;
            visit[i][j] = false;
        }
    }
}
/* Primeira BFS, para achar o elemento mais distante do elemento inicial */
pair <int, int> bfs(char grid[MAX][MAX], pair <int, int> inicial) {
    queue < pair <int,int> > q;
    pair <int, int> pred = inicial;
    int i, j;
    vector < pair <int, int> > dxy;
    vector < pair <int, int> > visitados;
    dxy.push_back(make_pair(-1,0));
    dxy.push_back(make_pair(0,1));
    dxy.push_back(make_pair(1,0));
    dxy.push_back(make_pair(0,-1));
    q.push(pred);
    dist[pred.first][pred.second] = 0;
    while (!q.empty()) {
        pred = q.front();
        i = pred.first;
        j = pred.second;
        for (int k = 0; k < dxy.size(); k++) {
            if (grid[i+dxy[k].first][j+dxy[k].second] == '.' && !visit[i+dxy[k].first][j+dxy[k].second]) {
                q.push(make_pair(i+dxy[k].first,j+dxy[k].second));
                dist[i+dxy[k].first][j+dxy[k].second] = dist[i][j] + 1;
                if (dist[i][j]+1 > maximo) maximo = dist[i][j]+1;
            }
        }
        visit[i][j] = true;
        visitados.push_back(make_pair(i,j));
        q.pop();
    }
    int a = visitados[visitados.size()-1].first;
    int b = visitados[visitados.size()-1].second;
    return make_pair(a,b);  
}

int main(int argc, const char *argv[]) {
    int t, m, n;
    char grid[MAX][MAX];
    scanf("%d",&t);
    pair <int, int> ponto;
    bool fst = false;
    while (t--) {
        scanf("%d %d",&m,&n);
        for (int i = 0; i < m; i++) {
            grid[0][i] = '#';
            grid[n+1][i] = '#';
        }
        for (int i = 0; i < n; i++) {
            grid[i][0] = '#';
            grid[i][n+1] = '#';
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                scanf(" %c",&grid[i][j]);
                if (grid[i][j] == '.' && !fst) {
                    ponto = make_pair(i,j);
                    fst = true;
                }
            }
        }
        zera(n,m);
        ponto = bfs(grid,ponto);
        zera(n,m);
        ponto = bfs(grid,ponto);
        printf("Maximum rope length is %d.\n",maximo);
        
    }
    return 0;
}
