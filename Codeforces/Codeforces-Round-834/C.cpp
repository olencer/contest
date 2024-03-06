#include <iostream>
#include <algorithm>

void solve()
{
    int l, r ,x, a, b;
    std::cin >> l >> r >> x >> a >> b;
    if(a > b) { std::swap(a, b); }

    int res = -1;
    int d1 = a - l;
    int d2 = b - a;
    int d3 = r - b;

    if(d2 == 0) {
        res = 0;
    } else if(d2 >= x) {
        res = 1;
    } else if(d1 >= x || d3 >= x) {
        res = 2;
    } else if(d1 + d2 >= x && d2 + d3 >= x){
        res = 3;
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
