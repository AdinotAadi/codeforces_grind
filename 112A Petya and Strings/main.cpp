#include <bits/stdc++.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    std::cin >> a >> b;
    if (strcmpi(a, b) == 0)
        std::cout << 0;
    else if (strcmpi(a, b) < 0)
        std::cout << -1;
    else if (strcmpi(a, b) > 0)
        std::cout << 1;
    return 0;
}