
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
setbuf(stdout, NULL);

float operadorA;
float operadorB;
int numero;
int bandera;
float ResultadoSuma,ResultadoResta,ResultadoDivision,ResultadoMultiplicacion,ResultadofactorialA,ResultadofactorialB;
int returnSuma,returnResta,returnDivision,returnMultiplicacion,returnfactorialA,returnfactorialB;
int entrada3;

bandera = 0;
operadorA=0;
operadorB=0;
entrada3 =0;


while(bandera==0)
{

	printf("\nIngrese un numero del 1-5");
	printf("1-Para ingresar primer numero (A=%.2f)",operadorA);
	printf("2-Para ingresar segundo numero (B=%.2f)",operadorB);
	printf("3-Para calcular las operaciones\n");
	printf("4-Para informar los resultados\n");
	printf("5-Salir\n");

	scanf("%d", &numero);
	fflush(stdin);

    switch(numero)
    {
        case 1:
        	getFloat("ingresar primer numero=", "numero mal ingresado, ingresa entre (-100000,100000) ",&operadorA, 3, 100000, -100000);

        break;
        case 2:
        	getFloat("ingresar segundo numero:", "numero mal ingresado",&operadorB, 3, 1000, -1000);

        break;
        case 3:

        entrada3=1;

        returnSuma = suma(operadorA, operadorB,&ResultadoSuma);
        returnResta = resta(operadorA, operadorB,&ResultadoResta);
        returnDivision = division(operadorA, operadorB,&ResultadoDivision);
        returnMultiplicacion = multiplicacion(operadorA, operadorB,&ResultadoMultiplicacion);
        returnfactorialA = factorial(operadorA,&ResultadofactorialA);
        returnfactorialB = factorial(operadorB,&ResultadofactorialB);



        printf("\nSe han calculado todas las operaciones\n");


        break;
        case 4:
			if(entrada3==1)
			{

			 if ((returnSuma == 0) && (returnResta == 0) && (returnMultiplicacion == 0))
			 {
				 printf("\nEl resultado de A+B es: %.0f",ResultadoSuma);
				 printf("El resultado de A-B es: %.0f",ResultadoResta);
				 printf("El resultado de A*B es: %.0f",ResultadoMultiplicacion);
			 }

			 if(returnDivision==-1) printf("No se puede dividir por cero");

			 else printf("El resultado de A/B es: %.2f",ResultadoDivision);

			 if(returnfactorialA==0) printf("El factorial de  A  es: %.0f",ResultadofactorialA);

			 else printf("No existe factoriales negativos");

			 if(returnfactorialB==0) printf("El factorial de  B  es: %.0f",ResultadofactorialB);

			 else printf("No existe factoriales negativos");

		break;

		case 5:
			bandera=1;
			break;

		default:
			printf("\nIngrese un dato correcto entre 1-5\n");
			break;

        }else
    	printf("No calculaste las operaciones \n");
    }

}
}






