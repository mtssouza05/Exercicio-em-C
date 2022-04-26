#include <stdio.h>
#include <stdlib.h>
//Mattheus Henrique da Silva Macedo de Souza
//2021200631

int mdc(int num1, int num2)
{
    if(num2 != 0)
       return mdc(num2, num1%num2);
    else 
       return num1;
}
 int main()
{
	int n1, n2,calc;
   printf("--Calculadora de MDC--\n");
   printf("\n Digite dois numeros inteiros: ");
   scanf("%d %d", &n1, &n2);
   calc=mdc(n1,n2);

   printf("\n O maximo divisor comum entre %d e %d e : %d", n1, n2,calc );
 return 0; 
}
