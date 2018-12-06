#include <iostream>
using namespace std;

class Valuta{
private:
    int valuta;
    float a;
public:
    Valuta(int dollars) {valuta = dollars;}

    int getDollars() const {
        return valuta;
    }

    friend Valuta operator+(const Valuta &d1, const Valuta &d2);
    friend Valuta operator+(const Valuta &d1, int value);
    friend Valuta operator+(int value, const Valuta &d1);
};

Valuta operator+(const Valuta &d1, const Valuta &d2) {
    return Valuta(d1.valuta + d2.valuta);
}
Valuta operator+(const Valuta &d1, int value) {
    return Valuta(d1.valuta + value);
}
Valuta operator+(int value, const Valuta &d1) {
    return Valuta(value + d1.valuta);
}

int main() {
    Valuta v1(51);
    Valuta v2(31);
    Valuta v3(41);

    return 0;
}

//+_+
