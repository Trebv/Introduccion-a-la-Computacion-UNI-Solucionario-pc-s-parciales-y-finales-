#include <iostream>

int main(){    
    float numUser = 0;
    int counter = 0;
    float sumaDeNotas = 0;
    do {
	std::cout << "Digite una nota (0-100):\n";
	std::cin >> numUser;
	if (numUser < 0 ){
	    std::cout << "Saliendo del programa...\n";
	    break;
	}
	if ( numUser < 0 || numUser > 100 ) {
	    std::cout << "La nota ingresada no esta entre 0 a 100.\n"
			 "Por favor vuelva a ingresar una nueva nota.\n";
	    continue;
	}
	sumaDeNotas += numUser;
	counter++;
    } while (numUser >= 0);
    if (counter == 0) {
	std::cout << "No hay datos. Es posible que halla ingresado notas no validas.\n";
    } else {
	std::cout << "cantidad de notas ingresados: " << counter << "\n";
	float average = sumaDeNotas/(float)counter;
	std::cout << "Promedio de notas: " << average << "\n";
    }
    return 0;
}
