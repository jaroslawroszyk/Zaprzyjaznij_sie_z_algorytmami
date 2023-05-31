#include <iostream>
#include <vector>

/*

0 --------> n
rzeka pozycje lisci
dest = pozycja na ktora chce sie dostac, leafs liczba lisci ktore spadna z drzewa
vector oznacza gdzie upadna liscie

dla danych 5,8
1 3 1 4 2 3 5 4

odpowiedz to 7
*/

auto main() -> int
{
    int n = 5;
    int m = 8;

    std::vector<int> leaves{1, 3, 1, 4, 2, 3, 5, 4};

    int remainingLeaves = n;
    int result = -1;
    std::vector<int> counts(n + 1, 0);

    for (int i = 0; i < m; ++i)
    {
        if (counts[leaves[i]] == 0)
        {
            remainingLeaves--;
        }
        if (remainingLeaves == 0)
        {
            result = i + 1;
            break;
        }
        counts[leaves[i]] = 1;
    }

    std::cout << result << std::endl;
}