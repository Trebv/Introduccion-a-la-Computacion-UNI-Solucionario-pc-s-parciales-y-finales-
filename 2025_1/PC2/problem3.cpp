#include <iostream>
int main(){
    const int GUESS_NUM = 50;
    const int TRIES = 6;

    int numOfTries = 0;
    int num = 0;

    while (true) {
	std::cout << "Enter a number: ";
	std::cin >> num;
	numOfTries++;
	if (num == 0 || numOfTries > TRIES ) { break; }
	
	/*
	Consideraremos "Demasiado alto" si la diferencia entre GUESS_NUM y NUM 
	es mayor que 10, en caso contrario se considera "Demasiado bajo"
	*/
	
	if (num - GUESS_NUM > 10) { std::cout << "Demasiado alto\n";}
	if (GUESS_NUM - num > 10) { std::cout << "Demasiado bajo\n";}
	if (GUESS_NUM == num) { 
	    std::cout << "Numero encontrado:)\n";
	    break;
	}
    }

    return 0;
}

