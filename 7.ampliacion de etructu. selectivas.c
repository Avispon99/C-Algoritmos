// Ampliacion de  estructuras selectivas

// realizar un programa que lea de la entrada estandar un numero entero y positivo y escriba en la salida estandar si es par o impar.

#include <stdio.h>

int main () {
	int x, y; 
	
	
	printf("introduzca un valor... ");
	scanf("%i",&x);
	
	y = x % 2; // Y  es igual al RESTO de dividir x entre 2.
	
	if(y==0) {
		
		printf("el numero  %i es PAR  \n\n",x); //de cumplirse la condicion de if
			
	}
	
   else {
   	
   	  printf ("el numero  %i es IMPAR	\n\n",x); // de no cumplirse la condicion de if
   }
		
	
system ("pause");	

return 0;
	
}
