#include <iostream>
int main() {
    int datos[];
    int n = 0;
    int dato = 0;
    do{
	std::cout << "Ingrese la cantidad de datos (5-30): ";
	std::cin >> n;
	if( n >= 5 && n <= 30 ) { break; }
	std::cout << "\nCantidad invalida. Intente nuevamente.\n";
    } while (true);
    
    for (int i = 0; i < n; i++){
	std::cout << "Ingrese dato " << i << ": ";
	std::cin >> dato;

    return 0;
}
