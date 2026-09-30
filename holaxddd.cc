#include <iostream>


void HacerSuma(int num1, int num2);

int main(){

    int num1, num2;

    std::cout << "hola mundo" << std::endl;

    HacerSuma(num1, num2);

    return 0;
}

void HacerSuma(int num1, int num2){
    std::cout << "numero 1";
    std::cin >> num1;

    std::cout << "numero 2";
    std::cin >> num2;

    int suma = num1 + num2;
    std::cout << "la suma es:" << suma << std::endl;

}