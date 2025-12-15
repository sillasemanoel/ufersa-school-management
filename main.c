// Nome: Sillas Emanoel Pessoa França

#include "stdio.h"
#include "math.h"
#include "string.h"

typedef struct{
double n1, n2, n3;
} Notas;

typedef struct{
char nome[50];
char cidade[50];
double media;
Notas notas;
} Aluno;



int main(){
	Aluno alunos[5];
	int j;
	unsigned short int opcao = -1;
	
	for(int i = 0; i < 5; i++) {
		strcpy(alunos[i].nome, "");
		strcpy(alunos[i].cidade, "");
		alunos[i].notas.n1 = 0;
		alunos[i].notas.n2 = 0;
		alunos[i].notas.n3 = 0;
		alunos[i].media = 0;
	}

	while (opcao != 0) {
		printf("\n+------------------------------+\n");
		printf("|            ESCOLAR           |\n");
		printf("+------------------------------+\n");
		printf("| %-28s |\n", "1 - Cadastrar aluno");
		printf("| %-28s |\n", "2 - Visualizar geral");
		printf("| %-28s |\n", "3 - Atualizar notas de aluno");
		printf("| %-28s |\n", "4 - Listar aprovados");
		printf("| %-28s |\n", "5 - Listar reprovados");
		printf("| %-28s |\n", "0 - Sair");
		printf("+------------------------------+\n");
		printf("O que deseja fazer? ");
		scanf("%hu", &opcao);

		switch (opcao) {
		case 1: {
			printf("\n=== CADASTRAR ALUNO ===\n");
			printf("Em qual indice deseja adicionar o novo aluno (0-4): ");
			scanf("%d", &j);
			getchar();
			if (j < 0 || j >= 5) {
    		printf("Indice invalido\n");
			}
			else{
				printf("Informe o nome do aluno: ");
				fgets(alunos[j].nome, 50, stdin);
				printf("Informe a cidade do aluno: ");
				fgets(alunos[j].cidade, 50, stdin);
				printf("Informe as 3 notas respectivamente: ");
				scanf("%lf %lf %lf", &alunos[j].notas.n1, &alunos[j].notas.n2, &alunos[j].notas.n3);
				alunos[j].media = cbrt(alunos[j].notas.n1 * alunos[j].notas.n2 * alunos[j].notas.n3);
				printf("Aluno cadastrado com sucesso!\n");
			}
			break;
		}
		case 2: {
			printf("\n=== VISUALIZAR ALUNOS ===\n");
			for(int i = 0; i < 5; i++){
				if(strlen(alunos[i].nome) > 1) {
					printf("--- Aluno %d ---\n", i+1);
					printf("Nome: %s", alunos[i].nome);
					printf("Cidade: %s", alunos[i].cidade);
					printf("Notas: %.2lf | %.2lf | %.2lf\n", alunos[i].notas.n1, alunos[i].notas.n2, alunos[i].notas.n3);
					printf("Media: %.2lf\n", alunos[i].media);
				} else {
					printf("\n--- Aluno %d ---\n", i+1);
					printf("(Vazia)\n");
				}
			}
			break;
		}
		case 3: {
			printf("\n=== ATUALIZAR NOTAS ===\n");
			int k;
			printf("Informe o indice do aluno que deseja alterar as notas (0-4): ");
			scanf("%d", &k);
			getchar();
			if (k < 0 || k >= 5){
    		printf("Indice invalido\n");
			}
				else if (strlen(alunos[k].nome) <= 1) {
    			printf("Nenhum aluno cadastrado nesta posicao!\n");
				}
				else{
				printf("Informe as 3 novas notas: ");
				scanf("%lf %lf %lf", &alunos[k].notas.n1, &alunos[k].notas.n2, &alunos[k].notas.n3);
				alunos[k].media = cbrt(alunos[k].notas.n1 * alunos[k].notas.n2 * alunos[k].notas.n3);
				printf("Notas atualizadas com sucesso!\n");
				}
			break;
		}
		case 4: {
			printf("\n=== LISTAR APROVADOS ===\n");
			int aprovados = 0;
			for(int i = 0; i < 5; i++){
				if(strlen(alunos[i].nome) > 1 && alunos[i].media >= 6){
					printf("Aluno %d - %s", i+1, alunos[i].nome);
					printf("Status: APROVADO (%.2lf)\n", alunos[i].media);
					aprovados++;
				}
			}
			if(aprovados == 0) {
				printf("Nenhum aluno aprovado encontrado.\n");
			}
			break;
		}
		case 5: {
			printf("\n=== LISTAR REPROVADOS ===\n");
			int reprovados = 0;
			for(int i = 0; i < 5; i++){
				if(strlen(alunos[i].nome) > 1 && alunos[i].media < 6){
					printf("Aluno %d - %s", i+1, alunos[i].nome);
					printf("Status: REPROVADO (%.2lf)\n", alunos[i].media);
					reprovados++;
				}
			}
			if(reprovados == 0) {
				printf("Nenhum aluno reprovado encontrado.\n");
			}
			break;
		}
		case 0: {
			printf("Programa encerrado.");
			return 0;
			break;
		}
		default:
			break;
		}

	}
}