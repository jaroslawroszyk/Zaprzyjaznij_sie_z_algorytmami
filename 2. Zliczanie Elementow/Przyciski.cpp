#include <iostream>
#include <vector>
#include <map>

int main()
{
    int n = 5;
    int m = 7;
    std::vector<int> counters(n, 0); // Inicjalizacja liczników jako zera
    std::vector<int> buttons{3, 4, 4, 6, 1, 4, 4};
    int min_value = 0;
    int max_value = 0;
    for (int i = 0; i < m; ++i)
    {
        if (buttons[i] == n + 1)
        {
            min_value = max_value;
        }
        else
        {
            counters[buttons[i] - 1] = std::max(min_value, counters[buttons[i] - 1]) + 1;
            max_value = std::max(max_value, counters[buttons[i] - 1]);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        counters[i] = std::max(min_value, counters[i]);
        std::cout << counters[i] << " "; // Wyświetlanie wartości liczników
    }
}