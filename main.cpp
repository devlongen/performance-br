#include <iostream>

float formula_aerodinamica(){
    float forca_de_arrasto;
    float p_densidade;
    float cx_aerodinamico;
    float a_frontal;
    float velocidade;

    std::cout << "Preenche formula do aerodinamico para aplicar teste de túnel";
    std::cin >> forca_de_arrasto;
    std::cin >> p_densidade;
    std::cin >> cx_aerodinamico;
    std::cin >> a_frontal;
    std::cin >> velocidade;
}

int main() {
    std::cout << "Começando aos trabalhos! heheh";
    return 0;
}
