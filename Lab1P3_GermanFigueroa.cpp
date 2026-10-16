#include <iostream>
using namespace std;

int main() {
    double pesoEnLibras, alturaEnCentimetros, pesoEnKilogramos, alturaEnMetros;
    cout << " Ingrese el peso en libras: ";
    cin >> pesoEnLibras;
    cout << " Ingrese la altura en centimetros: ";
    cin >> alturaEnCentimetros;
    pesoEnKilogramos = pesoEnLibras / 2.2;
    alturaEnMetros = alturaEnCentimetros / 100;
    cout << " El indice corporal de masa es: " << (pesoEnKilogramos) / (alturaEnMetros * alturaEnMetros) << endl;
}

