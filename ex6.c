/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


/* vari�veis */
float sal, rea;

/* corpo */
int main ()
{
	setlocale (LC_ALL, "");
	printf ( "Insira o valor do sal�rio: ");
	scanf ( "%f", &sal );
	rea = (sal*1.25);
	printf ( "O valor do sal�rio reajustado � de %.2f", rea );
	getch();
}
