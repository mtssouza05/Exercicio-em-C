#include <stdio.h>
#include <stdlib.h>

//Mattheus Henrique da Silva Macedo de Souza
//2021200631

main (){
int nota, aluno[5],contador; 
char gabarito[10];	

//gabarito= tudo a

for (int i=1;i<6;i++){
printf("\n --Aluno %d--\n",i);
nota=0;
 for(contador = 0; contador < 10; contador++)
  {
    printf(" \n Digite as respostas do aluno em letras minusculas: \t");
    scanf("%s",&gabarito[contador]);
  if(gabarito[contador]=='a'){
  	nota+=1;
  }
  
    	
    		
    	
	}
	printf("\n O aluno %d  \t",i);
	printf("\n Tem nota: %d \t",nota);
	if(nota>=7){
		printf("\n --ALUNO APROVADO-- \t");
	}
	else{
		printf("\n ALUNO REPROVADO :( \t");
	}
}
return 0;
  }

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

