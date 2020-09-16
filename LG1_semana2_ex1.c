/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Variáveis */
char menu,d1, d2, d3, d4;

/* Corpitcho */
int main()
{
    setlocale (LC_ALL, "");
    printf ("Digite a sua senha de 4 dígitos de 0 à 9: ");
    d1 = getch();
    printf ("*");
    d2 = getch();
    printf ("*");
    d3 = getch();
    printf ("*");
    d4 = getch();
    printf ("*");
    
    if (d1=='1' && d2=='3' && d3=='1' && d4=='0')
    {
    	mar:
		system("cls");
    	printf ("========MENU========");
    	printf ("\n   a) SALDO       ");
    	printf ("\n   b) DEPÓSITO    ");
    	printf ("\n   c) PAGAMENTOS  ");
    	printf ("\n   d) TRANSFERÊNCIAS");
    	printf ("\n   e) SAIR       \n ");
    	menu = getche();
	}
	  else 
    {
    	printf ("\n\n\tSENHA INCORRETA");
    	printf ("\n\tPRESSIONE QUALQUER");
    	printf ("\n\tTECLA PARA VOLTAR");
    	printf ("\n\t   AO MENU");
    	getch();
    	goto mar;
	}
	switch (menu)
	{
		case 'a': case 'A': system("cls");
		          printf ("===================\n");
		          printf ("===================\n");
		          printf ("==SEU SALDO É DE:==\n");
		          printf ("====50 CENTAVOS====\n");
		          printf ("===================\n");
		          printf ("PRESSIONE QUALQUER \n");
		          printf ("TECLA PARA RETORNAR\n");
		          printf ("     AO MENU       ");
		          getch();
		          goto mar;
		          
		case 'b': case 'B': system("cls"); 
		          printf ("===================\n");
		          printf ("===================\n");
		          printf ("=FAÇA SEU DEPÓSITO=\n");
		          printf ("===================\n");
		          printf ("===================\n");
		          printf ("PRESSIONE QUALQUER \n");
		          printf ("TECLA PARA RETORNAR\n");
		          printf ("     AO MENU       \n");
		          getch();
		          goto mar;
		
		case 'c': case 'C': system("cls");
		          printf ("===================\n");
		          printf ("=INSIRA O VALOR DO=\n");
		          printf ("===SEU PAGAMENTO===\n");
		          printf ("===================\n");
		          printf ("===================\n");
		          printf ("PRESSIONE QUALQUER \n");
		          printf ("TECLA PARA RETORNAR\n");
		          printf ("     AO MENU       \n");
		          getch();
		          goto mar;
		        
		case 'd': case 'D': system("cls");
		          printf ("===================\n");
		          printf ("=INSIRA O VALOR DA=\n");
		          printf ("===TRANSFERÊNCIA===\n");
		          printf ("===================\n");
		          printf ("===================\n");
		          printf ("PRESSIONE QUALQUER \n");
		          printf ("TECLA PARA RETORNAR\n");
		          printf ("     AO MENU       \n");
		          getch();
		          goto mar;	
				 
		case 'e': system("cls");
		          printf ("===================\n");
				  printf ("===================\n");
		          printf ("====ENCERRANDO=====\n");
		          printf ("=====OPERAÇÕES=====\n");
		          printf ("===================\n");
		          printf ("===================\n");		         
		          sleep (2);
				  return(0);
    }
  
	return(0);
}
