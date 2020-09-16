#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int par,pag;

int main()
{
	setlocale (LC_ALL,"");
	printf ("Um tabuleiro de xadrez tem 64 casas.\n");
	printf ("Os grãos iniciam em 1 e dobram a cada casa.");
	for ( par=1 ; par<=pow(2,15) ; par*2 );
	printf ("%i", par);
	pag=par+par*2;
	if (par<pow(2,15))
	 {printf (" + ");}
	else
	{printf (" = ");} 
	printf ("O pagamento é de %i grãos.", pag);
	getch();
}
