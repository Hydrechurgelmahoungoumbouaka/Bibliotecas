#include "esfera_utils.h"
#include "stdio.h"
#include "math.h"

#define PI 3.14

/**
 * @brief Calcula o volume de uma esfera com raio R.
 * @param R O raio da esfera.
 * @return O volume da esfera.
 */
float calcula_volume(float R)
{
    float volume;
    // calcula o volume de uma esfera
    volume = (4.0 / 3.0 )* PI * pow(R, 3);
    return volume;
}

/**
 * @brief Calcula a área de superfície de uma esfera com raio R.
 * @param R O raio da esfera.
 * @return A área de superfície da esfera.
 */
float calcula_area(float R)
{
    float area;
    // calcula a area de uma superficie de uma esfera com raio
    area = 4 * PI * pow(R, 2);
    return area;
}
