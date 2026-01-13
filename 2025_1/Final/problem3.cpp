#include <iostream>

int getN();
void printFigure(int n);

int main (){
    int n = getN();
    return 0;
}

int getN(){
    int n = 0;
    while (true){
        std::cout << "Enter N: ";
        std::cin >> n;
        if ( n >= 3 ) break;
        std::cout << "El valor debe ser mayor o igual a 3.\n";
    }
    return n;
}

void printFigure(int n){
    for (int i = 0; i < n ; i++){
        for (int j = 0; i < n; j++)
        {
            /* code */
        }
        
    }
    
}