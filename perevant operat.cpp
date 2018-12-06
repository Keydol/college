#include <iostream>
using namespace std;

class Valuta{
private:
    int valuta;
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

}
