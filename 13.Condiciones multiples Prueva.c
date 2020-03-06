// Escribe un programa que acepte 3 numeros ej: Hora, munutos, segundos y devuelva la hora que sera dentro de un segundo, controlando que sea la hora correcta.  

#include <stdio.h>  

int main () {

	int h, min, seg;
	
	printf ("ecribe  Hora : ");
	scanf ("%i",&h);	
	printf ("ecribe  Minutos : ");
	scanf ("%i",&min);
	printf ("ecribe  segundos : ");
	scanf ("%i",&seg);
	
	if (h <= 23 && min <= 59 && seg <= 59){
		seg += 1;  // hay que recordar que escribir "seg += 1" es lo mismo que escribir "seg = seg + 1" . 
	
	    
	    if(seg == 60){
	     min +=	1;
	     seg = 0;
	      
	      
	      
	      if(min==60){
	      	h += 1;
	      	min = 0;
	      	
	      	
	      	if(h == 24){
	      		h = 0;
	      		
	      	}
	      }
	      
	    }
	    
	    printf ("\nLa hora es %i:%i:%i.\n\n ",h,min,seg);
	    
	}
	else {
		printf ("\nEl valor introducido es INCORRECTO.\n\n");
	}
	
	
	
	system ("pause");
	return 0;
}
