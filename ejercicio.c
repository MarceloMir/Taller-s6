#include <stdio.h>
#include "funciones.h"
int main (int argc, char *argv[]) {

    float montoCredito=10000, tasaInteres=16.5, años=7;
    float monto, capRestante, interesAnual, sumaCapInt, cuotaMes, capXaño;

    printf("\nLa capital es: %f",&montoCredito);
    
    printf("\nla tasa de interes acutal: %f",&tasaInteres);
 
    printf("\nIngrese el tiempo a pagar: %f",&años);

    capXaño= montoCredito/años;
    monto=montoCredito;

    for (int i = 1; i <= años; i++)
    {
        if (i = 1){
            capRestante=monto;
        }else{
            capRestante= capital_restante(monto,capXaño);
        }
        monto=capRestante;
        interesAnual= interes_anual(monto,tasaInteres);
        sumaCapInt= capital_mas_interes(capXaño,interesAnual);
        cuotaMes= cuota_mensual(sumaCapInt);

        printf("año ",&i);
        printf("capital restante: ",&monto);
        printf("capital por año: ",&capXaño);
        printf("interes anual: ",&interesAnual);
        printf("capital mas interes",&sumaCapInt);
        printf("cuota por mes: ",&cuotaMes);


    }
          



    return 0;
}
