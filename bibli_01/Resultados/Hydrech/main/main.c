#include "stdio.h"
#include "esfera_utils.h"

int main(void)
{
    float R;
    scanf("%f", &R);
    float area = calcula_area(R);
    float volume = calcula_volume(R);
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}