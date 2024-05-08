#include <stdio.h>
#include "funciones.h"

float capital_restante(float valor1, float valor2 ){
    float res= valor1 - valor2;
    return res;
}

float interes_anual(float valor1, float valor2){
    float res=(valor1*16.5)/100
    return res;
}

float capital_mas_interes(float valor1, float valor2){
    float res= valor1 + valor2;
    return res;
}

float cuota_mensual(float valor){
    float res= valor/12;
    return res;
}
