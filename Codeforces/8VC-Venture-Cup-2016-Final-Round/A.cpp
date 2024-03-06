#include <iostream>
#include <cstring>

const int R = 10;
const int C = 10;

int pos[R + 1][C + 1];
int sum[R + 1][C + 1];

void solve()
{
    int r, c, n, k;
    std::cin >> r >> c >> n >> k;

    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        pos[x][y] = 1;
    }

    for (int x = 1; x <= r; ++x) {
        for (int y = 1; y <= c; ++y) {
            sum[x][y] = sum[x - 1][y] + sum[x][y - 1] - sum[x - 1][y - 1]
                        + pos[x][y];
        }
    }

    int res = 0;
    for (int x1 = 0; x1 < r; ++x1) {
        for (int y1 = 0; y1 < c; ++y1) {
            for (int x2 = x1 + 1; x2 <= r; ++x2) {
                for (int y2 = y1 + 1; y2 <= c; ++y2) {
                    if(sum[x2][y2] - sum[x1][y2] - sum[x2][y1] + sum[x1][y1]
                       >= k) { ++res; }
                }
            }
        }
    }

    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
