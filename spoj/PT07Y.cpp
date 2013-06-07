#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

void bfs(vector <int> edges[], int inicial, int n, int m) {
    bool visit[10000];
    bool is_tree = true;
    queue <int> Q;
    bzero(visit,sizeof(visit));
    int pred = inicial;
    Q.push(pred);
    while (!Q.empty()) {
        pred = Q.front();
        for (int i = 0; i < edges[pred].size(); i++) {
            if (!visit[edges[pred][i]]) 
                Q.push(edges[pred][i]);
        }
        visit[pred] = true;
        Q.pop();
    }
    for (int i = 0; i < n; i++)
        if (!visit[i]) {
            is_tree = false;
            break;
        }
    if (is_tree && n-1 == m) printf("YES\n");
    else printf("NO\n");
}

using namespace std;

int main(int argc, const char *argv[]) {
    int n, m, u, v;
    vector <int> edges[10500];
    scanf("%d %d",&n, &m);
    int i = 0;
    while(i++ < m) {
        scanf("%d %d",&u,&v);
        edges[u-1].push_back(v-1);
        edges[v-1].push_back(u-1);
    }
    bfs(edges,u,n,m);
    return 0;
}
