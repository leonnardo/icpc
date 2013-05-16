#include <cstdio>
#include <cstring>
#include <queue>
#define SIZE 100

using namespace std; 

void bfs(char matrix[SIZE][SIZE], int i, int j) {
    pair <int, int> pred(i,j);
    bool visitado[SIZE];
    queue < pair <int, int> > Q;
    Q.push(pred);
    while (!Q.empty()) {
    }

}

int main(int argc, const char *argv[])
{
    char grid[SIZE][SIZE];
    int h, w, cs = 1, res;
    scanf("%d %d",&h,&w);
    while (h != 0 || w != 0) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) 
                scanf("%c",&grid[i][j]);
        }
       
        printf("Case %d: %d",cs,res);
        cs++;
        scanf("%d %d",&h,&w);
    }
    return 0;
}
