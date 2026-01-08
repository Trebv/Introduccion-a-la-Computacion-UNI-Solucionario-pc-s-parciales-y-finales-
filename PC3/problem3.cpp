#include <iostream>
#include <cstdlib>
#include <ctime>

int main () {
    int array[5][5];
    int numMayorDiagonal = 0;
    srand(time(NULL));
    
    for ( int i = 0; i < 5; i++) {
	for ( int j = 0; j < 5; j++ ) {

	    array[i][j] = (rand() % 100) + 1;
	}
    }
    numMayorDiagonal = array[0][0];

    for (int i = 0; i < 5; i++) {
	if ( numMayorDiagonal < array[i][i] ) { numMayorDiagonal = array[i][i]; }
    }
    std::cout << "Numero mas grande en la diagonal principal: " << numMayorDiagonal << "\n";
    
    return 0;
}
