#include <iostream>
#include <cmath>
int main () {
    int n = 0;
    while(true){
	std::cout << "Enter n (entero positivo entre 1 y 50): ";
	std::cin >> n;
	if ( n >= 1 && n <= 50 ) {
	    break;
	}
	std::cout << "Numero no valido. Vuelva a intentarlo.\n";
    }
    //Calculo de la sumatoria.
    int suma = 0;
    for (int i = 1; i <= n; i++) {
	suma += pow(i, 2) + (3*i);
    }
    std::cout << "suma: " << suma << "\n";

    int valorAnalitico = 0;
    //Calculamos el valor calculado analiticamente con la formula:
    valorAnalitico = ((n * ( n + 1 ) * ( 2*n + 1 ))/6) +  ( 3 * ((n * (n + 1))/2));
    std::cout << "Valor calculado analiticamente con la formula: " << valorAnalitico << "\n";
    
    return 0;
}
