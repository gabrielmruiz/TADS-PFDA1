/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Vari�veis */
float num;
float dob;
float qua;

/* Corpo do programa */
int main()
{
	setlocale (LC_ALL, "");
	printf ( "Insira um n�mero para obter o seu respectivo dobro e quadrado: ");
	scanf ("%f", &num);
	dob = (num*2);
	qua = (num*num);
	printf ("\n\nO dobro de %.2f �: %.2f\nO quadrado de %.2f �: %.2f", num, dob, num, qua);
	getch ();
}
