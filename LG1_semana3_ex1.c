#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
 float bas, alt, are;
 int con; 
 main ()
 {
 	con=0;
	setlocale (LC_ALL, "");
	system ("cls");
	
	do
	{
	 printf ("Base: "); fflush (stdin); scanf ("%f", &bas);
	 printf ("Altura: "); fflush (stdin); scanf ("%f", &alt);
	
	if (bas==0 || alt==0)
	  { 
	   printf ("\n\nImpossível calcular!\n\n");
	  }
    else
	  {
      are=(bas*alt)/2;
      printf ("\n\n A área é %f\n\n", are);
      }
      con++;
	}
	while (con < 3);
	system ("pause");
	
	
 }
