/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* vari�veis */
int nas, atu, ida, mes, dia, sem;

/* corpo */
int main ()
{ 
    setlocale (LC_ALL, "");
    printf ("Insira seu ano de nascimento: ");
	fflush (stdin);
	scanf ("%i", &nas);  
    printf ("Insira o ano atual: ");
	fflush (stdin);
	scanf ("%i", &atu);
	ida = atu-nas;
	mes = ida*12;
	dia = mes*30;
	sem = mes*4;
	printf ("A sua idade em anos � %i", ida);
	printf ("\nA sua idade em meses � %i", mes);
	printf ("\nA sua idade em dias � %i", dia);
	printf ("\nA sua idade em semanas � %i", sem);
	getch(); 
}
