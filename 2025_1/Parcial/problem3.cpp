#include <iostream>
int main () {

    while (true) {
	std::cout << "Introduzca un numero entero (negativo para salir): ";
	int num = 0;
	std::cin >> num;
	if (num < 0) { break;}
    }

    return 0;
}
