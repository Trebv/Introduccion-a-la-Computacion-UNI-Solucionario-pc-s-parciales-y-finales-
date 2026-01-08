#include <iostream>
#include <cmath>
int main(){

    bool bajo_peso = false;
    bool peso_normal = false;
    bool sobre_peso = false;
    bool obesidad = false;

    int edad = 0;
    std::cout << "Ingrese la edad del paciente en an~os: ";
    std::cin >> edad;

    float peso = 0.0f, altura = 0.0f;
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    
    std::cout << "Ingrese su altura (m): ";
    std::cin >> altura;

    // Calculo de IMC:
    float imc = peso/pow(altura, 2);
    
    //Diagnostico:
    if (imc < 18.5) {
	bajo_peso = true;
    } else if ( imc < 25 ) {
	peso_normal = true;
    } else if ( imc < 30 ) {
	sobre_peso = true;
    } else {
	obesidad = true;
    }

    if ( edad <= 10 ){
	std::cout << "El paciente menor de 10 an~os se dirige al pediatra y su IMC es: " << imc;
    }
    if ( edad >= 75) {
	std::cout << "El paciente mayor de 75 an~os se dirige al geriatra y su IMC es: " << imc;
    }
    if ( obesidad ) {
	std::cout << ". Se considera con obesidad por lo que se debe dirigir al Cardiologo y al Nutricionista.\n";
    }
    if ( sobre_peso ) {
	std::cout << ". Se considera con sobre peso por lo que se debe dirigir al Nutricionista.\n";
    }
    if ( bajo_peso ) {
	std::cout << ". Se considera con bajo peso por lo que se debe dirigir al Gastroenterologo.\n";
    }
    return 0;
}
