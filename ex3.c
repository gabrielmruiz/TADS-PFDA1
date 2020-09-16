/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

/* Variáveis */
int bas;
int pot;
int res;

/* Corpo do programa */
 int main()
 {
 	setlocale (LC_ALL,"");
	printf ( "\nDeclare a base da potenciação: " );
    scanf ( "%i", &bas );
 	printf ( "\n\nDeclare o expoente pelo qual a base será elevada: " );
 	scanf ( "%i", &pot );
    res = pow(bas,pot);
	printf ( "\n\nO resultado da potenciação é: %.2i ", res);
	getch ();
}
