/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* vari�veis */
int cel;
float far;

/* corpo */
int main()
{
	setlocale (LC_ALL, "");
	printf ( "Insira a temperatura em celsius: ");
	scanf ("%i", &cel);
	far = (cel*1.8)+32;
	printf ( "A temperatura em fahrenheit �: %.2f", far);
	getch();
}
