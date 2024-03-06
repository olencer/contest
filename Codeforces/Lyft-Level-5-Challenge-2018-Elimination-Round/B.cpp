#include <iostream>
#include <cmath>

bool is_prime(int64_t x)
{
    if(!(x & 1)) { return x == 2; }
    for (int64_t i = 3; i <= std::sqrt(x); i += 2) {
        if(!(x % i)) { return false; }
    }
    return true;
}
void solve()
{
    int64_t a, b;
    std::cin >> a >> b;

    bool yes = false;
    if(a - b == 1 && is_prime(a + b)) { yes = true; }
    std::cout << (yes ? "YES" : "NO") << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
