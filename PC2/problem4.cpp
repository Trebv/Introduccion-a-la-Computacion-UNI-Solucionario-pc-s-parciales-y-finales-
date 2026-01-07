#include <iostream>
#include <string>

int main(){
    std::string userInput = "";
    int userNum = 0;
    std::string binNum = "";
    while( true ) {
	std::cout << "Ingrese un numero entero positivo: ";
	std::cin >> userNum;
	if ( userNum <= 0 ) { continue; }
	
	while ( true ) {
	    if (userNum / 2 < 2){
		break;
	    }
	    binNum += ( userNum % 2);
	}
	std::cout << "Representacion binaria de " << userNum << ": " << binNum << "\n";
	std::cout << "Desea convertir otro numero? (y/n): ";
	std::getline(std::cin >> std::ws, userInput);

	if (userInput 
    }
    return 0;
}
