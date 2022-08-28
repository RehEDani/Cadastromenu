#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu;
	
	printf("Bem Vindo a Real Fire.com \n\n");
	printf("Menu principal \n");
	printf("1 - Cadastro de Clientes \n");
	printf("2 - Cadastro de Perfil \n");
	printf("3 - Cadastro de Funcionarios \n");
	printf("4 - Relatórios \n");
	printf("Digite o menu desejado: ");
	scanf("%d", &menu);
	switch (menu){
		case 1: 
		printf("Cadastro de Clientes \n");
		break;
		
		case 2: 
		printf("Cadastro de Perfil \n");
		break;
		
		case 3: 
		printf("Cadastro de Funcionarios \n");
		break;
		
		case 4:
		printf("Relatorios \n");
		break;
		
	
		default :
		printf("Menu inválido \n");
	}
	
	system("pause");
	return 0;
	
	
}
