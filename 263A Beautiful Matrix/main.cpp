#include <bits/stdc++.h>

int main()
{
    int a[5][5], i, j;
    std::pair<int, int> p;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cin >> a[i][j];
            if (a[i][j] == 1)
                p = std::make_pair(i + 1, j + 1);
        }
    }

    std::cout << abs(3 - p.first) + abs(3 - p.second);
    return 0;
}