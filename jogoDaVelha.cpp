#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	//variavel que para o looping do jogo
	int game = 0;
	//varivel que para dar start no jogo
	int star = 0;
	//matriz onde vai armazenar X e O durante o jogo
	char xO[3][3];
	//variavel auxiliar que armazena linha do vetor
	int linha;
	//variavel onde armazena coluna
	int coluna;
	//variavel para tratar erro durante jogada do jogador
	char jogada;
	
	//habilita a acentuação para o português
	setlocale(LC_ALL, "Portuguese");
	
	//instruções sobre como jogar
	printf("Bem vindo ao jogo da velha \n\n Para jogar você precisar informar a linha e a colua onde você deseja colocar o X.\n \n");
	//mensagem de espera para o usuario começar o jogo
	printf("Para começar o jogo digite algo...");
	scanf("%s", &star);
	
	if(star != false ){
		
		//desenho do jogo da velha
		printf("\n   |   |   \n");
		printf("---+---+---\n");
		printf("   |   |   \n");
		printf("---+---+---\n");
		printf("   |   |   \n\n");
		
		//lopping que se repete enquanto o jogo não termina
		do{
			do{
				
				//pergunto ao usuario qual a linha que ele deseja jogar
				printf("Digite a linha: ");
				scanf("%d", &linha);
				
				//faz com que a variavel dê a posição correta da linha onde vai ser jogado
				linha = linha-1;
				
				//pergunto ao usuario qual a coluna onde ele deseja jogar
				printf("Digite a coluna: ");
				scanf("%d", &coluna);
				
				//faz com que a variavel dê a posição correta da coluna onde vai ser jogado
				coluna = coluna-1;
				
				if((strcmp (" ",xO[linha][coluna]) != 0)){
					xO[linha][coluna] = "X"
					//desenho do jogo da velha
					printf("\n %s | %s | %s \n",xO[0][0],xO[0][1],xO[0][2]);
					printf("---+---+---\n");
					printf(" %s | %s | %s \n",xO[1][0],xO[1][1],xO[1][2]);
					printf("---+---+---\n");
					printf(" %s | %s | %s \n\n",xO[2][0],xO[2][1],xO[2][2]);
				}
			}while();
			
		}while(game != true);
	}
	
	return 0;
}
