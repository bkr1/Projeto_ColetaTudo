#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void SubMenu2()
{
	printf("\t-----Instru�oes para jogar COLETA TUDO!-----\n");
	printf("\n1) MOVIMENTA��O: \n\nW - Mover para cima;\nS - Mover para baixo;");
	printf("\nA - Mover para a esquerda;\nD - Mover para a direita.\n");
	printf("\n\n2) OBJETIVO: \n\nO objetivo do jogo � coletar os s�mbolos que s�o iguais ao do seu personagem no mapa, em que a cada\n");
	printf("vez que voc� coleta 5 s�mbolos, o seu personagem muda de apar�ncia e voc� precisa coletar os s�mbolos\n");
	printf("correspondentes ao seu personagem, evitando encostar nos outros.\n");
}

void MSG_MENU()
{
	printf("----------COLETA TUDO!----------\n");
	printf("\n\t1. JOGAR");
	printf("\n\t2. COMO JOGAR");
	printf("\n\t3. OP��ES");
	printf("\n\t4. SAIR");
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao = 0;
	
	do
	{
		system("cls");
		
		MSG_MENU();
		
		printf("\n\nDigite sua op��o: ");
		fflush(stdin);
		scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1:
				system("cls");
				
				//Chamar fun��o para come�ar o jogo;
				
				system("pause");
				break;
			case 2:
				system("cls");
				
				SubMenu2();
				
				system("pause");
				break;
			case 3:
				system("cls");
				
				//Chama o menu de op��es;
				
				system("pause");
				break;
			case 4:
				printf("\n-----Saindo do jogo!-----\n\n");
				break;
			default:
				printf("\n-----Op��o inv�lida!-----\n\n");
		}
		
	}while(opcao != 4);
	
	system("pause");
	return 0;
}
