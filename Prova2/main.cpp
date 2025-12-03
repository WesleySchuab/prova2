#include "prova.hpp"

int main()
{
    float h, w;
    // Inicializa o retangulo
    Rectangle r1(1, 5);
    std::cout << "Retangulo orginal com altura " << r1.getHight() << std::endl;
    std:: cout << " Largura:  " << r1.getWidth() << std::endl;
    std:: cout <<" _ Altura: " << r1.getHight() << std::endl;

    // Exibi a area
    std::cout << "Area: " << r1.dimensions(r1.getHight(), r1.getWidth()) << std::endl;

    // Exibi o perimetro
    std::cout << "Perimetro: " << r1.perimeter(r1.getHight(), r1.getWidth()) << std::endl;

    // Desenha o retangulo
    std::cout << "Desenho do retangulo: " << std::endl;
    r1.draw(r1.getHight(), r1.getWidth());

    std:: cout << "Digite novos valores para o retangulo:" << std::endl;

    std::cout << "Digite a altura do retangulo: ";
    std::cin >> h;
    std::cout << "Digite a largura do retangulo: ";
    std::cin >> w;

    // Dados do retangulo modificados
    r1.setHight(h);
    r1.setWidth(w);

    std::cout << "Area: " << r1.dimensions(r1.getHight(), r1.getWidth()) << std::endl;
    std::cout << "Perimetro: " << r1.perimeter(r1.getHight(), r1.getWidth()) << std::endl;
    std::cout << "Desenho do retangulo: " << std::endl;
    r1.draw(r1.getHight(), r1.getWidth());

    return 0;
}