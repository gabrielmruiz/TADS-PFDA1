/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/* Variávies de Memória */
char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;    
int con=1;

/* Corpo do Programa */
int main()
{
    setlocale (LC_ALL, "portuguese");
    printf ("Digite uma senha de 11 caracteres: \n\n");
do
{
	c1=getch(); printf ("*");
	c2=getch(); printf ("*");
	c3=getch(); printf ("*");
	c4=getch(); printf ("*");
	c5=getch(); printf ("*");
	c6=getch(); printf ("*");
	c7=getch(); printf ("*");
	c8=getch(); printf ("*");
	c9=getch(); printf ("*");
	c10=getch(); printf ("*");
	c11=getch(); printf ("*"); con++;
  
  if (!(c1=='i' && c2=='r' && c3=='o' && c4=='n' && c5==' ' && c6=='m' && c7=='a' && c8=='i' && c9=='d' && c10=='e' && c11=='n'))
  	{printf ("\n\nSENHA INCORRETA AMIGÃO\n\n");}	
}
while (!(c1=='i' && c2=='r' && c3=='o' && c4=='n' && c5==' ' && c6=='m' && c7=='a' && c8=='i' && c9=='d' && c10=='e' && c11=='n')&&con<=3);

if (c1=='i' && c2=='r' && c3=='o' && c4=='n' && c5==' ' && c6=='m' && c7=='a' && c8=='i' && c9=='d' && c10=='e' && c11=='n')
  	{printf ("\n\nACESSO VIP!\n\n");}
else
   	{printf ("\n\nBARRADO NA ENTRADA\n\n");} 

 system("pause");
 getch();
 return(0);
}
