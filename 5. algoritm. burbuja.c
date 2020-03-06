//metodo burbuja
//intercambiar los valores de dos numero enteros introducidos  por teclado

#include <stdio.h>

int main () {
	
	
int x,y, auxiliar;


printf (" el valor de x es: ");	
scanf ("%i",&x);

printf (" el valor de y es: ");	
scanf ("%i",&y);	

auxiliar=x;
x= y;
y=auxiliar; 

printf("el valor de x es: %i. \n",x);  
printf("el valor de y es: %i. \n",y);	
	
	
	
	
	
	
	
	
	
system ("pause");
 
 return 0;
}
