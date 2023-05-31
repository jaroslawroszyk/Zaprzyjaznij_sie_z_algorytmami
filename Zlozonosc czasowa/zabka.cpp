// #include <iostream>
// #include <iomanip>
// #include <cmath>

// int main()
// {
//     double x = 0;   // poczatek
//     double y = 150; // koniec
//     double s = 20;  // dlugosc skoku
//     auto res = (x + y) / s;
//     // int res = 1 + (y - x - 1) / s;
//     std::cout << std::setw(2) << std::round(res);
// }
#include <iostream>

int main() {
    int x=0, y=150, s=20;

    int distance = y - x;  // obliczamy odległość do przebycia

    int jumps = distance / s;  // obliczamy ile skoków będzie potrzebnych

    if (distance % s != 0) {  // jeśli pozostanie reszta, to potrzebny będzie dodatkowy skok
        jumps++;
    }

    std::cout << jumps << std::endl;

    return 0;
}
