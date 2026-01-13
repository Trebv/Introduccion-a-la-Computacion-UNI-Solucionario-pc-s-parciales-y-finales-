#include <iostream>

int getN();

int main(){
    int n = getN();
    
    int array[n];
    



    return 0;
} 

int getN(){
    int n = 0;
    while (true){
        std::cout << "Enter N: ";
        std::cin >> n;

        if ( n > 0 && n <= 100) break;
        std::cout << "El valor de N debe estar entre [1-100].\n";
    }
    return n;
}
