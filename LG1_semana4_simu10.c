#include <stdio.h>
#include <conio.h>
#include <locale.h>

int carn;
char dorm;

int main()
{
	setlocale(LC_ALL,"");
	carn=-1;
	do
	{	printf ("Você já dormiu? [S/s]=Sim e [N/n]=Não\n");
		fflush (stdin); scanf ("%c", &dorm);
		carn++;
	}
	while (dorm!='s' || dorm!='s');
		printf ("Você contou %i carneirinhos!", carn);
	getch();
}
