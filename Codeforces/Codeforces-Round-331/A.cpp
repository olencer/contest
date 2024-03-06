#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    int minx = 1000, miny = 1000;
    int maxx = -1000, maxy = -1000;
    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        minx = std::min(minx, x);
        miny = std::min(miny, y);
        maxx = std::max(maxx, x);
        maxy = std::max(maxy, y);
    }

    int res = (maxx - minx) * (maxy - miny);
    std::cout << ((res != 0) ? res : -1) << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
