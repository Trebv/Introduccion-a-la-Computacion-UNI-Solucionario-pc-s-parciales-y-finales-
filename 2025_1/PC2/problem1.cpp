#include <iostream>

int main(){    

	//Esta variable nos permite saber cuantos numeros validos estamos recibiendo.
    int counter = 0;
    float sumaDeNotas = 0;
	
    do {
		std::cout << "Digite una nota (0-100).:\n";
		float numUser = 0;
		std::cin >> numUser;

		// Si el input ingresado es un numero < 0, el bucle finaliza.
		if (numUser < 0 ){ 
	    	break;
		}
		if ( numUser > 100 ) {
	    	std::cout << "Error: La nota ingresada no esta entre 0 a 100.\n"
			 			"Por favor vuelva a ingresar una nueva nota.\n";
	    	continue;
		}

		// con cada iteracion se pide un numero. Si el numero es valido [0-100], entonces acumulamos cada numero en la variable sumaDeNotas.
		sumaDeNotas += numUser;

		// El contador aumenta en 1. 
		counter++;
    } while (true);
    
	if (counter == 0) {
		std::cout << "No hay datos. Es posible que halla ingresado notas no validas.\n";
    } else {
		std::cout << "cantidad de notas ingresados: " << counter << "\n";
		float average = sumaDeNotas/(float)counter;
		std::cout << "Promedio de notas: " << average << "\n";
    }
	std::cout << "Saliendo del programa...\n";
    return 0;
}
