#include <bits/stdc++.h>

int main()
{
    std::string in, out;
    std::vector<int> num;
    int i, val;
    std::cin >> in;
    for (i = 0; i < in.length(); i += 2)
    {
        val = in[i] - '0';
        num.push_back(val);
    }
    std::sort(num.begin(), num.end());
    for (i = 0; i < num.size(); i++)
    {
        out += std::to_string(num[i]);
        if (i < num.size() - 1)
        {
            out += '+';
        }
    }
    std::cout << out << std::endl;
    return 0;
}