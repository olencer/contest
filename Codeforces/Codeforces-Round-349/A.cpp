#include <iostream>
#include <cmath>

const double PI = acos(-1);

void solve()
{
    double d, h, v, e;
    std::cin >> d >> h >> v >> e;

    double r = d / 2;
    double s = PI * r * r;
    double delta = v - e * s;
    if(delta <= 0) {
        std::cout << "NO\n";
    } else {
        double t = h * s / delta;
        std::cout << "YES\n";
        std::cout << t << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
