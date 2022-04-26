#include <stdio.h>
#include <string.h>

//Mattheus Henrique da Silva Macedo de Souza
//2021200631


int contador (char palavras[30]){

int quantidltr, vogais=0,consoant=0,i;	
   quantidltr= strlen(palavras);
  
  for (i=0;i<quantidltr;i++){
  	switch (palavras[i]){
  		case 'A':
  		case 'a':
  			case 'E':
  				case 'e':
  					case 'U':
  						case 'u':
  							case 'I':
  								case 'i':
  									case 'O':
  										case 'o':
  											vogais++;
  											break;
  											default:
  												consoant++;
  									
  										
  										
	  }
  }

   return (consoant);
}

int main (){
char palavra[30];
int quantidltr, vogais=0,consoant=0,i;	
  
  printf("---Contador de consoantes--- \n");
  printf("Digite uma palavra:");
  scanf("%s", &palavra);
 

   printf("Total de consoantes na palavra: %d\n",contador(palavra));

    return 0;
}
	
	

