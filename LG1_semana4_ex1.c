#include <stdio.h>
#include <conio.h>
#include <locale.h>

int num;

int main ()
{
	num=0;
    setlocale(LC_ALL, "");
    system("cls");
    printf ("eis todos os m�ltiplos de 3 de 0 � 100: ");
    do
    {num=num+3;
	printf ("%i\n", num);}
    while (num+3<100);
	getch();
}
