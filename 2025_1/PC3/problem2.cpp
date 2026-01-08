#include <iostream>
int main (){
    int array[3][2];
    int num = 0;

    std::cout << "Introduce los 6 elementos de la matriz 3x2 (fila por fila):\n";
    for ( int i = 0; i < 3; i++ ) {
		for ( int j = 0; j < 2; j++ ) {
	    	std::cin >> num;
	    	array[i][j] = num;
		}
    }
    
    std::cout << "Matriz Original: \n";
    for ( int i = 0; i < 3; i++ ) {
		for (int j = 0; j < 2; j++ ) {
	    	std::cout << array[i][j] << "  ";
		}
		std::cout << "\n";
    }

    std::cout << "Matriz Transpuesta: \n";
    
    for ( int j = 0; j < 2; j++ ) {
		for (int i = 0; i < 3; i++ ) {
	    	std::cout << array[i][j] << "  ";
		}
		std::cout << "\n";
    }

    int maxElement = array[0][0];
    int minElement = array[0][0];
    for ( int i = 0; i < 3; i++ ) {
		for ( int j = 0; j < 2; j++ ) {
	    	if ( minElement > array[i][j] ) { minElement = array[i][j]; }
	    	if ( maxElement < array[i][j] ) { maxElement = array[i][j]; }
		}
    }

    std::cout << "Elemento Mayor en la Matriz Original: " << maxElement << "\n" <<
				"Elemento Menor en la Matriz Original: " << minElement << "\n";
    return 0;
}
