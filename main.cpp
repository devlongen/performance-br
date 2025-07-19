#include <iostream>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int numero1, numero2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

    int resultado = soma(numero1, numero2);

    std::cout << "A soma é: " << resultado << std::endl;

    return 0;
}
