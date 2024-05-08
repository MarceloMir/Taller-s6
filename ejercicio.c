#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float montoCredito=10000, tasaInteres=16.5, años=7;
    float monto, capRestante, interesAnual, sumaCapInt, cuotaMes, capXaño;

    printf("\ningrese el monto de credito\n");
    scanf("%f",&montoCredito);
  printf("\nla tasa de interes actual\n");
  scanf("%f",&tasaInteres);
    printf("\nIngrese el tiempo a pagar\n");
    scanf("%f",&años);

    capXaño = montoCredito / años;
    monto = montoCredito;

    for (int i = 1; i <= años; i++)
    {
        if (i == 1){
            capRestante = monto;
        } else {
            capRestante = capital_restante(monto, capXaño);
        }
        monto = capRestante;
        interesAnual = interes_anual(monto, tasaInteres);
        sumaCapInt = capital_mas_interes(capXaño, interesAnual);
        cuotaMes = cuota_mensual(sumaCapInt);

        printf("\naño %d", i);
        printf("\ncapital restante: %.2f\n", monto);
        printf("\ncapital por año: %.2f\n", capXaño);
        printf("\ninteres anual: %.2f\n", interesAnual);
        printf("\ncapital mas interes: %.2f\n", sumaCapInt);
        printf("\ncuota por mes: %.2f\n", cuotaMes);

    }

    return 0;
}
