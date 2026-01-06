#include <iostream>

int main(){    
    int numUser = 0;
    int counter = 0;
    int numsOfUser[100];
    int index = 0;
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
	numsOfUser[index] = numUser;
	index++;
	counter = index;
    } while (numUser >= 0);
    
    std::cout << "Numeros ingresados:\n";
    for (int i = 0; i < counter; i++){
	std::cout << numsOfUser[i] << "\n";
    }
    std::cout << "cantidad de notas ingresados: " << counter << "\n";
    
    float average = 0;
    for (int i = 0; i < counter; i++){
	average += numsOfUser[i];
    }
    average /= counter;
    std::cout << "Promedio: " << average << "\n";


    return 0;
}
