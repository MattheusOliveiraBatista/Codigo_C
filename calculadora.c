#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
	int decisao = 0;
	do{	
		system("cls");
		float num1 = 0, num2 = 0;
		char operacao;
		printf("======================================================\n");
		printf("  CALCULADORA DE OPERAÇOES BASICAS MATEMATICAS\n");
		printf("======================================================\n");
		printf("Digite o primeiro numero: ");
		scanf("%f", &num1);
		printf("Digite o segundo numero: ");
		scanf("%f", &num2);
		printf("======================================================");


		printf("\n DIGITE + PARA SOMAR");
		printf("\n DIGITE - PARA SUBTRAIR");
		printf("\n DIGITE * PARA MULTIPLICAR");
		printf("\n DIGITE \ PARA DIVIDIR");
		printf("\n======================================================\n");

		printf("\nDigite a operacao que deseja: ");
		scanf("%s", &operacao);
		printf("\n======================================================");

		
		if (operacao == '+'){
			system("cls");
			printf("===================================\n");
			printf("  OPERACAO DE SOMAR ESCOLHIDA!\n");
			printf("===================================\n");
			printf("    %.2f + %.2f = %.2f", num1, num2, num1+num2);
			printf("\n===================================\n");
			Sleep(5000);
		}
		
		else if (operacao == '-'){
			system("cls");
			printf("===================================\n");
			printf("  OPERACAO DE SUBTRAIR ESCOLHIDA!\n");
			printf("===================================\n");
			printf("    %.2f - %.2f = %.2f", num1, num2, num1-num2);
			printf("\n===================================\n");
			Sleep(5000);
		}
		
		else if (operacao == '*'){
			system("cls");
			printf("=====================================\n");
			printf("  OPERACAO DE MULTIPLICAR ESCOLHIDA!\n");
			printf("=====================================\n");
			printf("    %.2f * %.2f = %.2f", num1, num2, num1*num2);
			printf("\n=====================================\n");
			Sleep(5000);
		}
		
		else if (operacao == '/'){
			system("cls");
			printf("===================================\n");
			printf("  OPERACAO DE DIVISAO ESCOLHIDA!\n");
			printf("===================================\n");
			printf("    %.2f / %.2f = %.2f", num1, num2, num1/num2);
			printf("\n===================================\n");
			Sleep(5000);
		}
		else{
			printf("\n\n===================================\n");
			printf("  RESPOSTA ERRADA, TENTE NOVAMENTE!");
			printf("\n===================================\n");

		}
		
		
		Sleep(5000);
		system("cls");
		printf("===================================\n");
		printf("Quer continuar? [1-SIM| 0-NAO]\nResposta:");
		scanf("%d", &decisao);	
		if (decisao == 0 || decisao == 1) continue;
		else{
			printf("===================================\n");
			printf("Tente novamente, quer continuar? [1-SIM| 0-NAO]\nResposta:");
			scanf("%d", &decisao);
		}
		printf("===================================\n");
		Sleep(5000);
		system("cls");

	}while(decisao);
}


