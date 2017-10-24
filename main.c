#include <stdio.h> // Chama biblioteca padrão de entrada e saída de dados
#include <stdlib.h> // Chama biblioteca padrão de entrada e saída de dados
#include <locale.h> // Chama biblioteca para alterção de acentuação
#include <math.h> // Chama biblioteca para operações matemáticas

/*algoritmo "Equacao2Grau"

Função : Resolver um equação de segundo grau informando os valores de a, b e c
Saída: Informa valor de x ou x1 e x2, demontrando como montar a operação
Autor : Mateus Paixão
Data Aloritimo: 30/08/2015 

*/
// Declara variáveis do tipo float (real)
float a, b, c; // Declara os parametros para conta, tipo real
float Delta; // Declara Delta
float RDelta; // Declara Raiz de Delta
float x, x1, x2; // Declara resultados
int op=1; // opção do tipo int (inteiro)
int main(){ // Inicio do método principal main#1
	  setlocale(LC_ALL,"Portuguese"); // Muda acentuação para português
	  system("color 02");
	  while(op == 1){
	  system("cls"); // Limpa tela
	  printf("==========================\n"); // Mostra na tela linha e pula uma linha
	  system("cls"); // Limpa tela
      printf("==========================\n"); // Mostra na tela e pula uma linha
      printf("   Euquação de 2° Grau\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      printf("     ax² - bx - c = 0\n"); // Mostra na Tela e pula uma linha
      printf("==========================\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      
      printf("Digite o valor de 'a': "); // Mostra na tela
      scanf("%f", &a); // lê o valor de A... atribui
      printf("Digite o valor de 'b': "); // Mostra na tela
      scanf("%f", &b); // lê o valor de B... atribui
      printf("Digite o valor de 'c': "); // Mostra na tela
      scanf("%f", &c); // lê o valor de C... atribui
      system("cls"); // Limpa tela
      
      printf("==========================\n"); // Mostra na tela e pula um alinha
      printf("        Resolução\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      printf("    D = b² - 4 * a * c\n"); // Mostra na tela e pula uma linha
      printf("==========================\n"); // Mostra na tela e pula uma linha
      printf("\n"); // Pula uma linha
      
      Delta = (pow(b,2)) - (4*a*c); // quadrado de B = pow(b,2) menos a operação de 4*a*c
      printf("D = b² - 4 * a * c\n"); // Mostra na tela e pula uma linha
      printf("D = (%.0f",b); // Mostra na tela, o valor de B
      printf(")² - 4 * %.0f",a); // Mostra na tela, o valor de A, valor de A formatado sem casa decimal
      printf(" * %.0f",c); // Mostra na tela, o valor de C, valor de C formatado sem casa decimal
      printf("\n"); // Pula uma linha
      printf("D = %.0f",pow(b,2)); // Mostra na tela quadrado de B formatada sem casa decimal
      printf("-%.0f",(4*a*c)); // Mostra na tela o resultado da operação sem casa decimal
      printf("\n"); // Pula uma linha
      printf("D = %.0f",Delta); // Mostra o valor de Delta sem casa decimal
      printf("\n\n"); // Pula duas linhas
      
      if (Delta < 0) { // testa valor de Delta, se for menor que zero if#1
	  	 printf("===============================\n"); // Mostra na tela e pula uma linha
         printf("| O valor de Delta é negativo |\n"); // Mostra na tela e pula uma linha
         printf("|    não possui Raiz real     |\n"); // Mostra na tela e pula uma linha
         printf("===============================\n"); // Mostra na tela e pula uma linha
	  }else{ // Testa Se Delta Não for menor que zero
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
      		
      		x = ((-b)/(2*a)); // atribui valor da operação a X
         	printf("x = %.0f",-b); // Mostra na tela, valor de B formatado para nenhuma casa decimal
         	printf("\n"); // Pula uma linha
         	printf("    ---\n"); // Mostra na tela e pula uma linha
         	printf("    %.0f",2 * a); // Mostra na tela, valor da operação sem casa decimal
         	printf("\n"); // Pula um linha
         	printf("O resultado é %.2f",x); // Mostra na tela, valor de X com duas casas decimais
      	}else{ // Testa de Não for igual a Zero
      		if (Delta > 0) { // Testa Se Delta for Maior que Zero if#3
      			printf("__________________________\n"); // Mostra na tela e pula uma linha
      			printf("    x = - b +/- rad(D)\n"); // Mostra na tela e pula uma linha
     			printf("          ------------\n"); // Mostra na tela e pula uma linha
      			printf("             2 * a \n"); // Mostra na tela e pula uma linha
      			printf("==========================\n"); // Mostra na tela e pula uma linha
      			printf("\n\n"); // Pulas duas linhas
      			
      			x1 = ((-b)+(RDelta))/(2*a); // Atribui o resultado da operação a X1
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
       			printf("     x1 = %.0f",(-b)+(RDelta)); // Mostra na tela resultado da operação sem casa decimal
       			printf("\n"); // Pula uma linha
      			printf("         ---\n"); // Mostra na tela e pula uma linha
       			printf("         %.0f",2 * a); // Mostra na tela, valor da operação sem casa decimal
       			printf("\n\n"); // Pula duas linhas
       			printf("    x1 = %.2f",x1); // Mostra na tela, valor de X1 com duas casas decimais
       			printf("\n\n"); // Pula duas linhas

       			printf("__________________________\n"); // Mostra na tela e pula uma linha
       			
       			printf("\n\n"); // Pula duas linhas
       			x2 = ((-b)-(RDelta))/(2*a); // Atribui o resultado da operação a X2
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
       			printf("     x2 = %.0f",(-b)-(RDelta)); // Mostra na tela, resultado da operação sem nenhuma casa decimal
       			printf("\n"); // Pula uma linha
       			printf("          ---\n"); // Mostra na tela pula uma linha
       			printf("          %.0f",2 * a); // Mostra na tela, resultado da operação sem nenhuma casa decimal
       			printf("\n\n"); // Pula duas linhas
       			printf("    x2 = %.2f",x2); // Mostra na tela, valor de X2 com duas casas decimais
       			printf("\n\n"); // Pula duas linha
      		} // if#3
		} // if#2
	  }//if#1
	  	printf("\n\n"); // Pula duas linhas
	  	printf("==========================\n"); // Mostra na tela e pula uma linha
	  	printf("     Escolha uma opção  \n");// Mostra na tela e pula uma linha
		printf("1 - Fazer outra operação\n"); // Mostra na tela e pula uma linha
		printf("2- Sair!\n"); // Mostra na tela e pula uma linha
		printf("==========================\n"); // Mostra na tela e pula uma linha
		printf("Opção [1 ou 2]: ");
		scanf("%i", &op);	 
	  }
} // Fim main#1

