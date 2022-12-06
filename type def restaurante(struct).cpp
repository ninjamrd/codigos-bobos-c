#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nome[100], endereco[300], tipcomida[100];
	int nota;

}Rest;

Rest REST[50];
Rest a;

int main(){
	int i=0, j=0, r, n, x;

	printf("perguntas de sim ou nao (s/n) responda com 1 para sim e 2 para nao\n");
	printf("voce quer cadastrar restaurantes?responda com 1/2 \n");



	scanf("%d", &r);

	if(r==1){

	while(r==1){

    fflush(stdin);

		printf("qual o nome do restaurante?\n");
		gets(REST[i].nome);


		printf("qual o endereco?\n");
		gets(REST[i].endereco);


		printf("qual eh o tipo de comida?\n");
		gets(REST[i].tipcomida);


		printf("De 0 a 5 qual a nota do restaurante?\n");
		scanf("%d", &REST[i].nota);

		i++;

		system("cls");


		printf("voce quer cadastrar mais restaurantes? 1/2 \n");

		scanf("%d", &r);

		if(r==2)break;

	}


	printf("quer que os restaurantes sejam apresentados do com melhor nota para o com pior? responda com 1/2 \n");
	
	fflush(stdin);

	scanf("%d", &r);
	
	if(r==1){
		
		
		for(n=i;n>0;n--){
		for(x=0;x<n;x++){
			if(REST[x].nota<REST[x+1].nota){
				
				strcpy(a.nome,REST[x].nome);
				strcpy(a.endereco,REST[x].endereco);
				strcpy(a.tipcomida,REST[x].tipcomida);
				a.nota=REST[x].nota;
				
				strcpy(REST[x].nome,REST[x+1].nome);
				strcpy(REST[x].endereco,REST[x+1].endereco);
				strcpy(REST[x].tipcomida,REST[x+1].tipcomida);
				REST[x].nota=REST[x+1].nota;
			
				strcpy(REST[x+1].nome,a.nome);
				strcpy(REST[x+1].endereco,a.endereco);
				strcpy(REST[x+1].tipcomida,a.tipcomida);
				REST[x+1].nota=a.nota;
		
			}
		}
	}
		
	}


	while (j<i){
		
		printf("\n----------------------------------------------------------------\n");
		
		printf("nome restaurante: \n%s\n", REST[j].nome);

		printf("endereco:  \n%s\n", REST[j].endereco);

		printf("tipo de comida:  \n%s\n", REST[j].tipcomida);



		switch(REST[j].nota){
			case 0:
				printf("o restaurante eh horrivel nota 0 \n");
				break;
			case 1:
				printf("o restaurante eh ruinzinho nota 1 \n");
				break;
			case 2:
				printf("o restaurante eh bem meia boca nota 2 \n");
				break;
			case 3:
				printf("o restaurante eh bonzinho nota 3 \n");
				break;
			case 4:
				printf("o restaurante eh bem bom nota 4 \n");
				break;
			case 5:
				printf("o restaurante eh muito bom slc nota 5 \n");
				break;
		}
 
		j++;
	}
}
}
