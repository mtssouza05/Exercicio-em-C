#include <stdio.h>
#include <stdlib.h>


//Mattheus Henrique da Silva Macedo de Souza 
//2021200631


main () {
int vet[10],i,maior,menor,posmaior,posmenor;

for (i=1;i<=10;i++){
	
	printf("\n Digite 10 numeros: \t ");
	scanf("%d", &vet[i]);
}	
maior=vet[0];
menor=99999;
posmaior=1;

for (i=1;i<=10;i++){

if (vet[i]>maior) {
maior=vet[i];
posmaior=i;

}	
if (vet[i]<menor){
	menor=vet[i];
	posmenor=i;


}	
	
}
	
printf("\n O maior numero do vetor e %d, e esta na posicao %d \t", maior,posmaior);
printf(" \n O menor numero e %d, e esta na posicao %d \t",menor,posmenor);	
	
	
	
	
	
	return 0;
}
