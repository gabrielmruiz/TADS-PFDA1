/*-------------------------------------------------------------- 
 Programa para cadastrar e gerar lista de produtos.
 Autor: Rog�rio Piloc�ge 
 Limite de caract�res por linha: 125
 -------------------------------------------------------------*/

/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

/* Tipos de dados pr�-definidos */
typedef   struct 
{   /* campos da estrutura */
    int    	Codprod;
    char   	Nomeprod[20+1]; /* 20 �teis mais o \0 = NULL TERMINATOR */
    float	Custoprod;
}  
registro; 

/* Vari�veis globais */
registro      reg; /* Vari�vel reg que � do tipo registro*/ 
int pilocas = 0;
/* Fun��es */
void  cadastra_produtos (void) /* Cadastra o nome o valor e o c�digo dos produtos */
{
	system ("cls");
	printf ("\nCodigo do produto: 1"); /* FALTA gerar o c�digo autonum�rico */
	reg.Codprod = 1;
	printf ("\nDigite o nome do produto: "); 
	fflush (stdin); 	gets(reg.Nomeprod); /* scanf  ("%s", &reg.Nomeprod); */
	printf ("\nDigite o valor do produto R$: ");
	fflush (stdin);     scanf  ("%f", &reg.Custoprod);
}

void consulta_produtos (void)
{
	system ("cls");
	printf ("\n================================================");
	printf ("\n               CADASTRO DE PRODUTOS             ");
	printf ("\n================================================");
    printf ("\n   CODPROD      NOME               VALOR (R$)   ");	
	printf ("\n================================================");
	printf ("\n   %i\t\t%-20s\t%.2f" , 
	              reg.Codprod, reg.Nomeprod, reg.Custoprod ) ;
	printf ("\n================================================");
    getch();	
}

void gera_lista_produtos (void)
{
    /* Vari�veis locais da fun��o */
	FILE   * 	arq; /* arq se referencia ao arquivo que vai conter a lista [LISTAPROD.TXT]*/
	/* Abrir o arquivo */
	arq  =  fopen ("LISTAPROD.TXT" , "w"); /* modo "w" cria sempre o arquivo do zero */
	/* Gravar o cabe�alho da lista */
	fprintf ( arq, "\n================================================");
	fprintf ( arq, "\n               CADASTRO DE PRODUTOS             ");
	fprintf ( arq, "\n================================================");
    fprintf ( arq, "\n   CODPROD      NOME               VALOR (R$)   ");	
	fprintf ( arq, "\n================================================");
	/* Gravar os dados do registro na lista */
	fprintf ( arq, "\n%i\t\t%-20s\t%.2f", reg.Codprod, reg.Nomeprod, reg.Custoprod );
	/* Grava o rodap� da lista */
	fprintf ( arq, "\n================================================");
	/* Fecha o arquivo */
	fclose (arq);
}

/* Corpo do Programa */
int main ()
{
    cadastra_produtos();	
    consulta_produtos();
    gera_lista_produtos();
	return (0);
}
