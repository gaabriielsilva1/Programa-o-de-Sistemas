#include "matematica.h"

float calcula_media(float numeros[], int qtd){

    float soma = 0;
    for(int i = 0; i<qtd; i++){
        soma+= numeros[i];
    }

    return soma/3;
}