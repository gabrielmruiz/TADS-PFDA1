/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* Variáveis */
float ah,am,pih,pim;
char sex;
/* Corpitcho */
int main ()
{
	setlocale (LC_ALL,"portuguese");
	printf (" QUAL O SEU SEXO?  \nDIGITE H PARA HOMEM OU M PARA MULHER:" );
	sex = getche();
switch (sex)
{ 
 case 'h': case 'H': printf ("\nDIGITE A SUA ALTURA EM METROS: ");
 fflush(stdin);
 scanf ("%f", &ah);
 pih = (72.7*ah)-58;
 printf ("O SEU PESO IDEAL É %f kg", pih);
 break;
 
 case 'm': case 'M': printf ("\nDIGITE A SUA ALTURA EM METROS: ");
 fflush(stdin);
 scanf ("%f", &am);
 pim = (62.1*am)-44.7;
 printf ("O SEU PESO IDEAL É %f kg", pim);
 break;
 
 default: printf ("\n\n O CARACTER INSERIDO NÃO É VÁLIDO! \n\tTENTE NOVAMENTE!");   
}
getch();
return(0);	
}
