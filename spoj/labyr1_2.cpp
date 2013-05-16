#include <cstdio>
#include <utility>
#include <queue>
#define MAX 1024

char grid[MAX][MAX];
bool visit[MAX][MAX];
int dist[MAX][MAX];

/* Faz as duas bfs em uma bfs só */
void bfs() {

}

int main(int argc, const char *argv[]) {
    int t, r, c;
    scanf("%d",&t);
    bool start;
    while (t--) {
        scanf("%d %d",&c,&r);
        start = false;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                scanf(" %c",&grid[i][j]);
                if (!start && grid[i][j] == '.')
        }
        bfs();
    }
    return 0;
}
