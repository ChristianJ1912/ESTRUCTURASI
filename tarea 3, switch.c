#include<stdio.h>

int num;

int main()
{
   printf("Escoga un numero del 0 a 9: ");
   scanf("%d", &num);

   if(num>= 0 && num<=9)
     switch(num)
       {
      case 0:
        printf("valor del usuario = 0 --> cero");
        break;
      case 1:
        printf("valor del usuario = 1 --> uno");
        break;
      case 2:
        printf("valor del usuario = 2 --> dos");
        break;
      case 3:
        printf("valor del usuario = 3 --> tres");
        break;
      case 4:
        printf("valor del usuario = 4 --> cuatro");
        break;
      case 5:
        printf("valor del usuario = 5 --> cinco");
        break;
      case 6:
        printf("valor del usuario = 6 --> seis");
        break;
      case 7:
        printf("valor del usuario = 7 --> siete");
        break;
      case 8:
        printf("valor del usuario = 8 --> ocho");
        break;
      case 9:
        printf("valor del usuario = 9 --> nueve");
        break;
       }
    else if(num > 9)
        printf("Valor del usuario = %d --> Incorrecto, numero mayor a 9", num);
    else
        printf("Valor del usuario = %d --> Incorrecto, numero menor a 0", num);
}
