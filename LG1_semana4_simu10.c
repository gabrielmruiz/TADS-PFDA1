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
	{	printf ("Voc� j� dormiu? [S/s]=Sim e [N/n]=N�o\n");
		fflush (stdin); scanf ("%c", &dorm);
		carn++;
	}
	while (dorm!='s' || dorm!='s');
		printf ("Voc� contou %i carneirinhos!", carn);
	getch();
}
