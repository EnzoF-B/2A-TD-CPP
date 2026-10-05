#include "complex2d.h"

// ---------- Constructeurs ----------
Complex2D::Complex2D() : a(0.0), b(0.0) {}
Complex2D::Complex2D(double _a, double _b) : a(_a), b(_b) {}
Complex2D::Complex2D(double all) : a(all), b(all) {}
Complex2D::Complex2D(const Complex2D& other) : a(other.a), b(other.b) {}

// ---------- set / get ----------
void Complex2D::setReal(double _a) { a = _a; }
void Complex2D::setImag(double _b) { b = _b; }
double Complex2D::getReal() const { return a; }
double Complex2D::getImag() const { return b; }

// ---------- Arithmétique ----------
Complex2D Complex2D::operator+(const Complex2D& o) const {
    return Complex2D(a + o.a, b + o.b);
}

Complex2D Complex2D::operator-(const Complex2D& o) const {
    return Complex2D(a - o.a, b - o.b);
}

Complex2D Complex2D::operator*(const Complex2D& o) const {
    return Complex2D(a * o.a - b * o.b, a * o.b + b * o.a);
}

Complex2D Complex2D::operator/(const Complex2D& o) const {
    double d = o.a * o.a + o.b * o.b;
    if (d == 0.0)
    {
        std::cerr << "Erreur : division par zero" << std::endl;
        return Complex2D(0.0, 0.0);
    }
    return Complex2D((a * o.a + b * o.b) / d, (b * o.a - a * o.b) / d);
}

// ---------- Comparaisons (par module) ----------
bool Complex2D::operator<(const Complex2D& o) const { return norme2() < o.norme2(); }
bool Complex2D::operator>(const Complex2D& o) const { return norme2() > o.norme2(); }

// ---------- Ajouts ----------
Complex2D& Complex2D::operator=(const Complex2D& o) {
    if (this != &o) { a = o.a; b = o.b; }
    return *this;
}

bool Complex2D::operator==(const Complex2D& o) const { return a == o.a && b == o.b; }
bool Complex2D::operator!=(const Complex2D& o) const { return !(*this == o); }

Complex2D& Complex2D::operator+=(const Complex2D& o) { a += o.a; b += o.b; return *this; }
Complex2D& Complex2D::operator-=(const Complex2D& o) { a -= o.a; b -= o.b; return *this; }
Complex2D Complex2D::operator-() const { return Complex2D(-a, -b); }

double Complex2D::norme2() const { return a * a + b * b; }
Complex2D Complex2D::conjugue() const { return Complex2D(a, -b); }

std::ostream& operator<<(std::ostream& os, const Complex2D& z) {
    os << z.a << (z.b < 0 ? " - " : " + ") << (z.b < 0 ? -z.b : z.b) << "i";
    return os;
}