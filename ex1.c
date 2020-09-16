/* Bibliotecas */ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* Variáveis */
float rai;
float alt;
float vol;

/* Corpo do programa */
int main ()
{
	setlocale ( LC_ALL, "" );
	printf ( "Vamos calcular o volume de uma lata de óleo!" ); 
	printf ( "\n\nInsira o valor do raio da base: ");
	fflush (stdin);
	scanf ("%f", &rai );
	printf ("\n\nInsira a altura da lata em centímetros: ");
	fflush (stdin);
	scanf ("%f", &alt );
	vol = (3.14159)*(rai*rai)*(alt);
	printf ("\n\nO volume da lata de óleo é: %.2f", vol);
	getch ();
}
