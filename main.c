#include <stdio.h> // Chama biblioteca padr�o de entrada e sa�da de dados
#include <stdlib.h> // Chama biblioteca padr�o de entrada e sa�da de dados
#include <locale.h> // Chama biblioteca para alter��o de acentua��o
#include <math.h> // Chama biblioteca para opera��es matem�ticas

/*algoritmo "Equacao2Grau"

Fun��o : Resolver um equa��o de segundo grau informando os valores de a, b e c
Sa�da: Informa valor de x ou x1 e x2, demontrando como montar a opera��o
Autor : Mateus Paix�o
Data Aloritimo: 30/08/2015 

*/
// Declara vari�veis do tipo float (real)
float a, b, c; // Declara os parametros para conta, tipo real
float Delta; // Declara Delta
float RDelta; // Declara Raiz de Delta
float x, x1, x2; // Declara resultados
int op=1; // op��o do tipo int (inteiro)
int main(){ // Inicio do m�todo principal main#1
	  setlocale(LC_ALL,"Portuguese"); // Muda acentua��o para portugu�s
	  system("color 02");
	  while(op == 1){
	  system("cls"); // Limpa tela
	  printf("==========================\n"); // Mostra na tela linha e pula uma linha
	  system("cls"); // Limpa tela
      printf("==========================\n"); // Mostra na tela e pula uma linha
      printf("   Euqua��o de 2� Grau\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      printf("     ax� - bx - c = 0\n"); // Mostra na Tela e pula uma linha
      printf("==========================\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      
      printf("Digite o valor de 'a': "); // Mostra na tela
      scanf("%f", &a); // l� o valor de A... atribui
      printf("Digite o valor de 'b': "); // Mostra na tela
      scanf("%f", &b); // l� o valor de B... atribui
      printf("Digite o valor de 'c': "); // Mostra na tela
      scanf("%f", &c); // l� o valor de C... atribui
      system("cls"); // Limpa tela
      
      printf("==========================\n"); // Mostra na tela e pula um alinha
      printf("        Resolu��o\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      printf("    D = b� - 4 * a * c\n"); // Mostra na tela e pula uma linha
      printf("==========================\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      
      Delta = (pow(b,2)) - (4*a*c); // quadrado de B = pow(b,2) menos a opera��o de 4*a*c
      printf("D = b� - 4 * a * c\n"); // Mostra na tela e pula uma linha
      printf("D = (%.0f",b); // Mostra na tela, o valor de B
      printf(")� - 4 * %.0f",a); // Mostra na tela, o valor de A, valor de A formatado sem casa decimal
      printf(" * %.0f",c); // Mostra na tela, o valor de C, valor de C formatado sem casa decimal
      printf("\n"); // Pula uma linha
      printf("D = %.0f",pow(b,2)); // Mostra na tela quadrado de B formatada sem casa decimal
      printf("-%.0f",(4*a*c)); // Mostra na tela o resultado da opera��o sem casa decimal
      printf("\n"); // Pula uma linha
      printf("D = %.0f",Delta); // Mostra o valor de Delta sem casa decimal
      printf("\n\n"); // Pula duas linhas
      
      if (Delta < 0) { // testa valor de Delta, se for menor que zero if#1
	  	 printf("===============================\n"); // Mostra na tela e pula uma linha
         printf("| O valor de Delta � negativo |\n"); // Mostra na tela e pula uma linha
         printf("|    n�o possui Raiz real     |\n"); // Mostra na tela e pula uma linha
         printf("===============================\n"); // Mostra na tela e pula uma linha
	  }else{ // Testa Se Delta N�o for menor que zero
	  	RDelta = sqrt(Delta); // Atribui valor de Raiz quadrata de Delta a RDelta 
      	if (Delta == 0) { // Testa de Delta for igual a zero if#2
      		printf("==========================\n"); // Mostra na tela e pula uma linha
      		printf("_____Delta igual a zero___\n"); // Mostra na tela e pula uma linha
      		printf("==========================\n"); // Mostra na tela e pula uma linha
      		printf("       x =  - b\n"); // Mostra na tela e pula uma linha
     		printf("           ------\n"); // Mostra na tela e pula uma linha
     		printf("           2 * a \n"); // Mostra na tela e pula uma linha
      		printf("==========================\n"); // Mostra na tela e pula uma linha
      		printf("\n\n"); // Pula duas linhas
      		
      		x = ((-b)/(2*a)); // atribui valor da opera��o a X
         	printf("x = %.0f",-b); // Mostra na tela, valor de B formatado para nenhuma casa decimal
         	printf("\n"); // Pula uma linha
         	printf("    ---\n"); // Mostra na tela e pula uma linha
         	printf("    %.0f",2 * a); // Mostra na tela, valor da opera��o sem casa decimal
         	printf("\n"); // Pula um linha
         	printf("O resultado � %.2f",x); // Mostra na tela, valor de X com duas casas decimais
      	}else{ // Testa de N�o for igual a Zero
      		if (Delta > 0) { // Testa Se Delta for Maior que Zero if#3
      			printf("__________________________\n"); // Mostra na tela e pula uma linha
      			printf("    x = - b +/- rad(D)\n"); // Mostra na tela e pula uma linha
     			printf("          ------------\n"); // Mostra na tela e pula uma linha
      			printf("             2 * a \n"); // Mostra na tela e pula uma linha
      			printf("==========================\n"); // Mostra na tela e pula uma linha
      			printf("\n\n"); // Pulas duas linhas
      			
      			x1 = ((-b)+(RDelta))/(2*a); // Atribui o resultado da opera��o a X1
       			printf("    x1 =  - b + rad(D)\n"); // Mostra na tela e pula uma linha
       			printf("          ------------\n"); // Mostra na tela e pula uma linha
       			printf("             2 * a \n"); // Mostra na tela e pula uma linha
       			printf("\n\n"); // Pula duas linhas
       			printf("      x1 = -(%.0f",b); // Mostra na tela, valor de B com nenhuma casa decimal
       			printf(")+%.0f",RDelta); // Mostra na tela, valor de RDelta sem casa decimal
       			printf("\n"); // Pula uma linha
       			printf("          ---------\n"); // Mostra na tela e pula uma linha
       			printf("            2 * %.0f",a); // Mostra na tela, valor de A sem nenhuma casa decimal
       			printf("\n\n"); // Pula duas linhas
       			printf("     x1 = %.0f",(-b)+(RDelta)); // Mostra na tela resultado da opera��o sem casa decimal
       			printf("\n"); // Pula uma linha
      			printf("         ---\n"); // Mostra na tela e pula uma linha
       			printf("         %.0f",2 * a); // Mostra na tela, valor da opera��o sem casa decimal
       			printf("\n\n"); // Pula duas linhas
       			printf("    x1 = %.2f",x1); // Mostra na tela, valor de X1 com duas casas decimais
       			printf("\n\n"); // Pula duas linhas

       			printf("__________________________\n"); // Mostra na tela e pula uma linha
       			
       			printf("\n\n"); // Pula duas linhas
       			x2 = ((-b)-(RDelta))/(2*a); // Atribui o resultado da opera��o a X2
       			printf("    x2 =  - b - rad(D)\n"); // Mostra na tela e pula uma linha
       			printf("          ------------\n"); // Mostra na tela e pula uma linha
       			printf("             2 * a \n"); // Mostra na tela e pula uma linha
       			printf("\n\n"); // Pula duas linhas
       			printf("      x2 = -(%.0f",b); // Mostra na tela, o valor de B sem nenhuma casa decimal
       			printf(")-%.0f",RDelta); // Mostra na tela, valor de RDelta sem nenhuma casa decimal
       			printf("\n"); // Pula uma linha
       			printf("          ---------\n"); // Mostra na tela pula uma linha
       			printf("            2 * %.0f",a); // Mostra na tela, valor de A sem nenhuma casa decimal
       			printf("\n\n"); // Pula duas linhas
       			printf("     x2 = %.0f",(-b)-(RDelta)); // Mostra na tela, resultado da opera��o sem nenhuma casa decimal
       			printf("\n"); // Pula uma linha
       			printf("          ---\n"); // Mostra na tela pula uma linha
       			printf("          %.0f",2 * a); // Mostra na tela, resultado da opera��o sem nenhuma casa decimal
       			printf("\n\n"); // Pula duas linhas
       			printf("    x2 = %.2f",x2); // Mostra na tela, valor de X2 com duas casas decimais
       			printf("\n\n"); // Pula duas linha
      		} // if#3
		} // if#2
	  }//if#1
	  	printf("\n\n"); // Pula duas linhas
	  	printf("==========================\n"); // Mostra na tela e pula uma linha
	  	printf("     Escolha uma op��o  \n");// Mostra na tela e pula uma linha
		printf("1 - Fazer outra opera��o\n"); // Mostra na tela e pula uma linha
		printf("2- Sair!\n"); // Mostra na tela e pula uma linha
		printf("==========================\n"); // Mostra na tela e pula uma linha
		printf("Op��o [1 ou 2]: ");
		scanf("%i", &op);	 
	  }
} // Fim main#1

