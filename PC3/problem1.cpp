#include <iostream>
int main() {
    int array[5];
    int num_M = 0, num_m = 0;
    // Almacenar cada numero en el array
    for (int i = 0; i < 5; i++) {
	std::cout << "Ingrese un numero: ";
	int num = 0;
	std::cin >> num;
	if ( i == 1) {
	    num_M = num;
	    num_m = num;
	}
	array[i] = num;

	if ( num_M < num ) { num_M = num; }
	if ( num_m > num ) { num_m = num; }
    }
    
    std::cout << "Numero mas grande del arreglo: " << num_M << "\n"<<
		"Numero mas pequen~o del arreglo: " << num_m << "\n";
    return 0;
}
