#include <iostream>
#include <cmath>

void solve()
{
    int n;
    std::cin >> n;

    int res = 0;
    int a = int(sqrt(n));

    n -= a * a;
    res += (a << 1);
    if(1 <= n && n <= a) {
        ++res;
    } else if(n != 0) {
        res += 2;
    }

    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
