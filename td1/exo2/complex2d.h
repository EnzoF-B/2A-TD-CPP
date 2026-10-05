#ifndef COMPLEX2D_H
#define COMPLEX2D_H

#include <iostream>

class Complex2D {

private:
    double a; // partie réelle
    double b; // partie imaginaire

public:
    // Constructeurs
    Complex2D();                         // par défaut : 0 + 0i
    Complex2D(double _a, double _b);     // un réel, un imaginaire
    Complex2D(double all);               // même valeur pour les deux
    Complex2D(const Complex2D& other);   // constructeur en copie

    // set / get
    void setReal(double _a);
    void setImag(double _b);
    double getReal() const;
    double getImag() const;

    // Opérateurs arithmétiques
    Complex2D operator+(const Complex2D& o) const;
    Complex2D operator-(const Complex2D& o) const;
    Complex2D operator*(const Complex2D& o) const;
    Complex2D operator/(const Complex2D& o) const;

    // Comparaisons (selon le module)
    bool operator<(const Complex2D& o) const;
    bool operator>(const Complex2D& o) const;

    // Ajouts possibles
    Complex2D& operator=(const Complex2D& o);
    bool operator==(const Complex2D& o) const;
    bool operator!=(const Complex2D& o) const;
    Complex2D& operator+=(const Complex2D& o);
    Complex2D& operator-=(const Complex2D& o);
    Complex2D operator-() const;         // opposé

    double norme2() const;               // |z|^2 = a*a + b*b
    Complex2D conjugue() const;          // conjugué

    friend std::ostream& operator<<(std::ostream& os, const Complex2D& z);
};

#endif