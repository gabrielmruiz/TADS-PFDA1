#include <stdio.h>
#include <conio.h>
#include <locale.h>

int num, mul;

int main()
{
	num=15;
	setlocale(LC_ALL,"");
	printf ("quadrados dos n�meros entre 15 e 200: ");
	do{
	mul=num*num;
	printf ("%i\n",mul);
	num++;}
	while (num<=200);
}
