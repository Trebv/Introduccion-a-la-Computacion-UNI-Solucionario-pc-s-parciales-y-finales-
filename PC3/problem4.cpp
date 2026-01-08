#include <iostream>
#include <cmath>
int main(){
    int distancias[] = {50, 120, 180, 240, 310, 400, 500, 610, 720, 850};
    std::cout << "Distancia del nuevo cliente: ";
    int distanciaCli = 0;
    std::cin >> distanciaCli;
    
    int distanciaCiudadMasCercana = 0;
    int minDiferencia = 200;
    for (int i = 0; i < 10; i++){
	if( distanciaCli == distancias[i] ) {
	    std::cout << "Se encontro una coincidencia con una ciudad a una distancia de " << distanciaCli << "km.\n";
	    return 0;
	}
	if ( minDiferencia > std::abs(distancias[i] - distanciaCli) ) { 
	    minDiferencia = std::abs(distancias[i] - distanciaCli); 
	    distanciaCiudadMasCercana = distancias[i];
	}
    }

    std::cout << "No se encontro una coincidencia exacta.\n" <<
		"La ciudad mas cercana esta a " << distanciaCiudadMasCercana << "km.\n"; 
    return 0;
}
