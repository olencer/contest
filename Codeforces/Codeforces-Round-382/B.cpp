#include <iostream>
#include <algorithm>

void solve()
{
    int n, n1, n2;
    std::cin >> n >> n1 >> n2;

    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    if(n1 > n2) { std::swap(n1, n2); }
    std::sort(a, a + n, std::greater<>());

    double res = 0;
    int64_t sum = 0;
    for (int i = 0; i < n1; ++i) { sum += a[i]; }
    res += double(sum) / n1;

    sum = 0;
    for (int i = 0; i < n2; ++i) { sum += a[n1 + i]; }
    res += double(sum) / n2;

    std::cout << res << '\n';

}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
