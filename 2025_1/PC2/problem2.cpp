#include <iostream>
int main(){
    
    int counter = 0;
    int sum = 0;
    do {
		
		std::cout << "Ingrese un numero: ";
		int num = 0;
		std::cin >> num;
	
		if (num <= 0 ) { 
	    	std::cout << "Error: Numero no valido\n"
				 "Por favor digite un numero mayor que 0.\n";
	    	continue;
		}
    	sum += num;
		counter++;
    } while (sum < 50);

    std::cout << "Suma total: " << sum << 
		 	"\nCantidad de numeros ingresados: " << counter << "\n";
    return 0;
}
