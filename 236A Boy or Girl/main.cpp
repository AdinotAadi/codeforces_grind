#include <bits/stdc++.h>

int main()
{
    std::string name;
    std::unordered_set<char> in;
    int i;
    std::cin >> name;
    for (i = 0; i < name.length(); i++)
        in.emplace(name[i]);
    if (in.size() % 2 == 0)
        std::cout << "CHAT WITH HER!" << std::endl;
    else
        std::cout << "IGNORE HIM!" << std::endl;
    return 0;
}