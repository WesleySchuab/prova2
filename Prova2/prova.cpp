#include "prova.hpp"
using namespace std;

Rectangle::Rectangle(float h, float w)
{
    hight = h;
    width = w;
}
// Calcula a area
float Rectangle::dimensions(float h, float w)
{
    return h * w;
}

// Calcula o perimetro
float Rectangle::perimeter(float h, float w)
{
    return 2 * (h + w);
}

// Desenha o retangulo
void Rectangle::draw(float h, float w)
{
    for (int i = 0; i < h; i++)
    {
        // Desenha a borda superior e inferior
        if (i == 0 || i == h - 1)
        {
            for (int j = 0; j < w; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            // Desenha as bordas laterais
            cout << "* ";
            for (int j = 1; j < w - 1; j++)
            {
                cout << "  ";
            }
            if (w > 1)
                cout << "* ";
        }
        cout << endl;
    }
}

float Rectangle::getHight()
{
    return hight;
}
float Rectangle::getWidth()
{
    return width;
}
void Rectangle::setHight(float h)
{
    hight = h; 
}
void Rectangle::setWidth(float w)
{
    width = w;
}
// Destrutor
Rectangle::~Rectangle()
{
}