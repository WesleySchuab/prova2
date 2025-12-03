#ifndef PROVA_HPP
#define PROVA_HPP
#include<iostream>
#include<iomanip>
class  Rectangle
{
private:
    //Largura e altura
    float hight;
    float width;
public:
/**
     * Construtor parametrizado
     * Cria um retangulo já com dados preenchidos
     * Uso: Retangulo r2(10.0, 5.0);
 */
    Rectangle (float h, float w);

    //calcula a area
    float dimensions(float h, float w);
    //calcula o perimetro
    float perimeter(float h, float w);
    // Desenha o retangulo
    void draw(float h, float w);
    float getHight();
    float getWidth();
    void setHight(float h);
    void setWidth(float w);

     Rectangle(/* args */);
    ~ Rectangle();
};

 


#endif
