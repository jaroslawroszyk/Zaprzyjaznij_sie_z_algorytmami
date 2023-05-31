#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

auto main() -> int
{
    // std::vector<int> vec{2, 3, 1, 5}; // odp 4
    std::vector<int> vec{1,2,3,4,5,6,7,8,9}; // odp 5
    int n = 10;
    auto suma = std::accumulate(vec.begin(), vec.end(), 0);
    int s = (n * (n + 1)) / 2;
    int wynik = s - suma;
    std::cout << wynik;
}