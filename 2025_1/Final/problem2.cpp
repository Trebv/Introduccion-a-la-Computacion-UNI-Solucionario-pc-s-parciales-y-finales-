#include <iostream>
#include <cmath>

int getNumber();
int sumOfSquaresDigits(int num);

int main() {
    int num = getNumber();
    std::cout << "Calculo: " << sumOfSquaresDigits(num) << "\n";
    return 0; 
}

int getNumber(){
    int num = 0;
    while (true){
        std::cout << "Enter number: ";
        std::cin >> num;
        if (num > 0) break;
        std::cout << "El numero debe ser > 0.\n";
    }
    return num;
}

int sumOfSquaresDigits(int num){
    int sumOfSquares = 0;
    while (true){
        sumOfSquares = sumOfSquares + pow(num % 10, 2); 
        if(num < 10){
            break;
        }else{
            num = (num-(num % 10))/10;
        }
    }
    return sumOfSquares;
}