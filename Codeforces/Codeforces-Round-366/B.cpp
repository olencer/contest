#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    bool res = true;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;

        if(!(a & 1)) { res = !res; }
        std::cout << int(res) + 1 << '\n';
    }

}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
