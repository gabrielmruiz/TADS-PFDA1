/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* vari�veis */
float bru, liq1, liq2, pre, imp;

/* corpo */
int main()
{
	setlocale (LC_ALL, "");
	printf ("Insira o valor bruto do sal�rio: ");
	fflush (stdin);
	scanf ("%f", &bru);
	liq1 = bru*0.915;
	liq2 = liq1*0.725;
	pre = bru*0.085;
	imp = liq1*0.275;
	printf ( "\n\nO sal�rio l�quido �: %.2f", liq2);
	printf ( "\n\nO valor para previd�ncia �: %.2f", pre);
	printf ( "\n\nO valor para IR �: %.2f", imp);
	getch();
}
