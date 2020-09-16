#include <stdio.h>
#include <locale.h>
#include <conio.h>

int con=1; 
int num;
int a1;

int main()
{
    setlocale (LC_ALL,"portuguese"); 
    printf ("Digite um número para visualizar a sua tabuada do 1 ao 10:\n");
    printf ("Número: "); fflush (stdin); scanf ("%i", &num);
do 
 { 
    a1=num*con;
    printf ("\n%i multiplicado por %i é %i", num, con, a1); con++;
 }
while (con<=10);

getch();
return(0);
}

