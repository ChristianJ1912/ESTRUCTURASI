#include<stdio.h>
#include<math.h>

int operacion;
float r, r1, n1, n2;
char cont;

main ()
{
   do{
   printf("Ingrese un n�mero entero: ");
   scanf("%f", &n1);
   printf("Ingrese otro n�mero entero: ");
   scanf("%f", &n2);
   printf("�C�al de las siguientes operaciones quiere efectuar?\n\nSELECCIONE EL NUMERO CORRESPONDIENTE A LA OPERACCION\n\n 1.-Suma\n 2.-Resta\n 3.-Multiplicaci�n\n 4.-Divisi�n\n 5.-Potencia\n 6.-Modulo\n 7.-Ra�z cuadrada\n\n\t\t");
   scanf("%d", &operacion);

   switch(operacion)
     {
     case 1:
        r = n1 + n2;
        printf("El resultado es %f", r);
        break;
     case 2:
        r = n1 - n2;
        printf("El resultado es %f", r);
        break;
     case 3:
        r = n1 * n2;
        printf("El resultado es %f", r);
        break;
     case 4:
        r = n1 / n2;
        printf("El resultado es %f", r);
        break;
     case 5:
        pow(n1, n2);
        printf("El resultado es %f", r);
        break;
     case 6:
        printf("La operaci�n no es posible realizarla");
        break;
     case 7:
        r = sqrt(n1);
        r1 = sqrt(n2);
        printf("El resultado es %f de %d y %f de %d", r, n1, r1, n2);
        break;
     }

   printf("\n�Deseas continuar (s/n)?: ");
   scanf("%c", &cont);

   }while(cont == 's');

   printf("\n\nVUELVA PRONTO!!!");
}
