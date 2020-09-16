/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


/* variáveis */
float sal, rea;

/* corpo */
int main ()
{
	setlocale (LC_ALL, "");
	printf ( "Insira o valor do salário: ");
	scanf ( "%f", &sal );
	rea = (sal*1.25);
	printf ( "O valor do salário reajustado é de %.2f", rea );
	getch();
}
