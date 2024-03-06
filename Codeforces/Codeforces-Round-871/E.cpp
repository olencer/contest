#include <iostream>
#include <algorithm>

const int N = 1e3;
const int M = 1e3;

int n, m;
int d[N][M];
bool visited[N][M];

int dfs(int x, int y)
{
    int sum = d[x][y];
    visited[x][y] = true;

    if(x != 0 && !visited[x - 1][y] && d[x - 1][y] != 0) {
        sum += dfs(x - 1, y);
    }
    if(y != 0 && !visited[x][y - 1] && d[x][y - 1] != 0) {
        sum += dfs(x, y - 1);
    }
    if(x != n - 1 && !visited[x + 1][y] && d[x + 1][y] != 0) {
        sum += dfs(x + 1, y);
    }
    if(y != m - 1 && !visited[x][y + 1] && d[x][y + 1] != 0) {
        sum += dfs(x, y + 1);
    }

    return sum;
}

void solve()
{
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> d[i][j];
            visited[i][j] = false;
        }
    }

    int res = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(!visited[i][j] && d[i][j] != 0) {
                res = std::max(res, dfs(i, j));
            }
        }
    }

    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
