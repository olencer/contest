#include <iostream>
#include <array>

void solve()
{
    int r1, c1, r2, c2;
    std::cin >> r1 >> c1 >> r2 >> c2;

    int dr = std::abs(r1 - r2);
    int dc = std::abs(c1 - c2);
    std::array<int, 3> res{};

    res[0] = 1 + (dr && dc ? 1 : 0);
    res[1] = !(dr & 1 && dc & 1) ? 0 : (1 + (dr != dc ? 1 : 0));
    res[2] = std::max(dr, dc);
    for (int i = 0; i < 3; ++i) {
        std::cout << res[i] << " \n"[i == 2];
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
