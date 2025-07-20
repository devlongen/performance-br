#include <iostream>
#include <cmath>
#include <string>

float cx_car(std::string usuario){
    float coeficiente_aerodinamico;
    float forca_de_arrasto;
    float p_densidade;
    float a_referencia_frontal;
    float velocidade_objeto;

    std::cout << "Olá, seja bem vindo caro: " << usuario << std::endl << "Que aproveite esse programa!";
    std::cout << "Vamos trabalhar com a formula para dizer força de arrasto ou coeficiente aerodinamico de um carro..." << std::endl;
    std::cout << "Intuito deste cálculo para depois aplicar no teste de túnel para entendermos a performance em rua ou simular." << std::endl;
    std::cout << "Começaremos te perguntando, sobre os valores perante ao carro" << std::endl;

    std::cout << "Qual seria o coeficiente aerodinamico do carro? (Caso não souber, digite -1)" << std::endl;
    std::cin >> coeficiente_aerodinamico;
    std::cout << "Qual número é a força de arrasto? (Newtons)" << std::endl;
    std::cin >> forca_de_arrasto;
    std::cout << "Qual é a densidade do ar? (kg/m³)" << std::endl;
    std::cin >> p_densidade;
    std::cout << "Qual é a área de referência do veiculo? (m²)" << std::endl;
    std::cin >> a_referencia_frontal;
    std::cout << "Qual velocidade atinge este carro? (m/s)" << std::endl;
    std::cin >> velocidade_objeto;

    if(coeficiente_aerodinamico != -1){
    // forca de arrasto
    forca_de_arrasto = 0.5f * p_densidade * std::pow(velocidade_objeto,2) * a_referencia_frontal * coeficiente_aerodinamico;
    return forca_de_arrasto;
}
    else{
        // Calculo de coeficiente aerodinamico
        coeficiente_aerodinamico = (2 * forca_de_arrasto) / (p_densidade * std::pow(velocidade_objeto,2) * a_referencia_frontal);
        return coeficiente_aerodinamico;
    }
    return 0;
}

int main() {
    std::string usuario;
    float resultado;
    std::cout << "Começando aos trabalhos! heheh" << std::endl;
    std::cout << "Qual é o seu nome?" << std::endl;
    std::cout << "--> ";
    std::cin >> usuario;
    resultado = cx_car(usuario);
    std::cout << "Seu resultado é:" << resultado << std::endl;
    std::cout << "Obrigado por usar o programa!";
    return 0;
}
