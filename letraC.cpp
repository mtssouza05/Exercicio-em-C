#include <stdio.h>
#include <stdlib.h>

//Mattheus Henrique da Silva MAcedo de Souza 
//2021200631
void inv(char *string)
{
if(*string)
{
inv(string+1);
putchar(*string);
}
}


main () {

inv("Mattheus");	
	
	
	
	
	
	
	
	return 0;
}
