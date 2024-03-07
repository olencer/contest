#include <iostream>
#include <queue>
#include <utility>
#include <cstring>

const int N = 1E3;
const int M = 1E3;

bool a[N][M];
int dist[N][M];
std::queue<std::pair<int, int>> q;


int n, m;

void bfs()
{
    std::memset(dist, -1, sizeof(dist));
    dist[0][0] = 0;
    q.emplace(0, 0);
    while (!q.empty()) {
        auto [x , y] = q.front();
        q.pop();

        if (y < m - 1 && a[(x + 1) % n][y + 1] == 0 && dist[(x + 1) % n][y + 1] == -1) {
            dist[(x + 1) % n][y + 1] = dist[x][y] + 1;
            q.emplace((x + 1) % n, y + 1);
        }
        if (a[(x + 1) % n][y] == 0 && a[(x + 2) % n][y] == 0 && dist[(x + 2) % n][y] == -1) {
            dist[(x + 2) % n][y] = dist[x][y] + 1;
            q.emplace((x + 2) % n, y);
        }
    }
}

void solve()
{
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }

    bfs();
    int res = -1;
    for (int i = 0; i < n; i++) {
        int x = dist[i][m - 1];
        if (x != -1) {
            x += (i + 1 - x % n + n) % n;
            if (res == -1 || res > x) {
                res = x;
            }
        }
    }
    std::cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
