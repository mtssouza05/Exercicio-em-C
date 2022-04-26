#include <stdio.h>
#include <stdlib.h>

//Mattheus Henrique da Silva Macedo de Souza
//2021200631

int contador (int num){
	int conta;
	conta=0;
	for (int i=0;i=num;i++){
		num-=1;
		if (num%2==0){
			conta=conta+num;
		}
	}
	return (conta);
	
}
main (){
	int numero;
	printf("--Esse programa somara todos os numeros pares presentes em um numero informado pelo usuario!--\n");
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	printf("O valor da soma dos inteiros pares presentes no numero digitado e: \n %d",contador(numero));
	
	
	
	
	
	
	
	return 0;
}
