#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    bool odd = false;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        if((odd = (a & 1))) { break; }
    }

    std::cout << (odd ? "First" : "Second") << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
