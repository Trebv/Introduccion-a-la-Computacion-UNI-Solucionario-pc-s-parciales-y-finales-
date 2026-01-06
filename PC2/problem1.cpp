#include <iostream>

int main(){    
    int numUser = 0;
    int counter = 0;
    int numsOfUser[100];
    int index = 0;
    do {
	std::cout << "Digite un numero (0-100):\n";
	std::cin >> numUser;
	if (numUser < 0 ){
	    std::cout << "Saliendo del programa...\n";
	    break;
	}
	if ( numUser < 0 || numUser > 100 ) {
	    std::cout << "El numero ingresado no esta entre 0 a 100.\n"
			 "Por favor vuelva a ingresar un nuevo numero.\n";
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
    std::cout << "cantidad de numeros ingresados: " << counter << "\n";


    return 0;
}
