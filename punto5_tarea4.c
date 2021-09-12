#include<stdio.h>

void menormayor(int num1, int num2, int nummay*, int nummen*);
int numeros(int nummay, int nummen);

int n1, n2, nmen, nmay;

int main()
{
    printf("Dame un numero: ");
    scanf("%d", &n1);
    printf("Dame otro numero: ");
    scanf("%d", &n2);
    menormayor(n1, n2, nmay*, nmen* );
    numeros(nmay,nmen);

    return 0;

}

void menormayor(int num1, int num2, int *nummay, int *nummen)
       if(num1 < num2)
           *nummen = num1;
           *nummey = num2;
       else
           *nummen = num2;
           *nummey = num1;

int numeros(int nummay, int nummen)
       int i;

       for(i=nummen; i<nummay; i++)
           printf("%d\t", &nummen);
