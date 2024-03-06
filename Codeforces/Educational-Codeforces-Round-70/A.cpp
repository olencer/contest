#include <iostream>
#include <string>

void solve()
{
    std::string x, y;
    std::cin >> x >> y;

    int y_pos = int(y.find_last_of('1'));
    int y_x_pos = x.size() - y.size() + y_pos;
    int x_pos = x.find_last_of('1', y_x_pos);

    std::cout << y_x_pos - x_pos << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
