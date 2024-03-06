#include <iostream>
#include <string>

void solve()
{
    std::string s;
    std::cin >> s;

    std::string x, y;

    int sum = 0;
    for (char i : s) {
        int v = i - '0';
        int a = (v + int(sum < 0)) / 2;
        int b = v - a;

        x += char('0' + a);
        y += char('0' + b);
        sum += a - b;
    }

    std::cout << std::stoi(x) << ' ' << std::stoi(y) << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
