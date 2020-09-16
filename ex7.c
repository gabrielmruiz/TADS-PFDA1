/* bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* variáveis */
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
	printf ("A sua idade em anos é %i", ida);
	printf ("\nA sua idade em meses é %i", mes);
	printf ("\nA sua idade em dias é %i", dia);
	printf ("\nA sua idade em semanas é %i", sem);
	getch(); 
}
