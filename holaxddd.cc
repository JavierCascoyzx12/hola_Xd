#include <iostream>

<<<<<<< HEAD

void HacerSuma(int num1, int num2);
=======
void HacerResta(int num1, int num2){
    std::cout << "numero 1";
    std::cin >> num1;

    std::cout << "numero 2";
    std::cin >> num2;

    int resta = num1 - num2;
    std::cout << "la resta es:" << resta << std::endl;

}




>>>>>>> feature/resta

int main(){

    int num1, num2;

    std::cout << "hola mundo" << std::endl;

    HacerSuma(num1, num2);

    return 0;
}
<<<<<<< HEAD

void HacerSuma(int num1, int num2){
    std::cout << "numero 1";
    std::cin >> num1;

    std::cout << "numero 2";
    std::cin >> num2;

    suma = num1 + num2;
    std::cout << "la suma es:" << suma << std::endl;

}
=======
>>>>>>> feature/resta
