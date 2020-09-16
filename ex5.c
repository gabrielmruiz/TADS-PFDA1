/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* variáveis */
float bru, liq1, liq2, pre, imp;

/* corpo */
int main()
{
	setlocale (LC_ALL, "");
	printf ("Insira o valor bruto do salário: ");
	fflush (stdin);
	scanf ("%f", &bru);
	liq1 = bru*0.915;
	liq2 = liq1*0.725;
	pre = bru*0.085;
	imp = liq1*0.275;
	printf ( "\n\nO salário líquido é: %.2f", liq2);
	printf ( "\n\nO valor para previdência é: %.2f", pre);
	printf ( "\n\nO valor para IR é: %.2f", imp);
	getch();
}
