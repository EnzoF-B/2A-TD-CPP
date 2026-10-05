#include <iostream>
#include "complex2d.h"

int main() {
    Complex2D z0;             // 0 + 0i
    Complex2D z1(3, 4);       // 3 + 4i
    Complex2D z2(2);          // 2 + 2i
    Complex2D z3(z1);         // copie de z1

    std::cout << "z0 = " << z0 << "\n";
    std::cout << "z1 = " << z1 << "\n";
    std::cout << "z2 = " << z2 << "\n";
    std::cout << "z3 = " << z3 << "\n\n";

    std::cout << "z1 + z2 = " << z1 + z2 << "\n";
    std::cout << "z1 - z2 = " << z1 - z2 << "\n";
    std::cout << "z1 * z2 = " << z1 * z2 << "\n";
    std::cout << "z1 / z2 = " << z1 / z2 << "\n\n";

    std::cout << "z1 < z2 ? " << (z1 < z2) << "\n";
    std::cout << "z1 > z2 ? " << (z1 > z2) << "\n";
    std::cout << "|z1|^2 = " << z1.norme2() << "\n";
    std::cout << "conj(z1) = " << z1.conjugue() << "\n";

    z0.setReal(1.5);
    z0.setImag(-2);
    std::cout << "z0 modifie = " << z0 << " (re=" << z0.getReal()
              << ", im=" << z0.getImag() << ")\n";

    std::cout << z1 / Complex2D() << "\n"; // affiche l'erreur
    return 0;
}