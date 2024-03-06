#include <iostream>

void solve()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    int x, y;
    bool yes = false;
    for (x = n / a; x >= 0; --x) {
        int by = n - a * x;
        if(!(by % b)) {
            y = by / b;
            yes = true;
            break;
        }
    }

    if(yes) {
        std::cout << "YES\n";
        std::cout << x << ' ' << y << '\n';
    } else {
        std::cout << "NO\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
