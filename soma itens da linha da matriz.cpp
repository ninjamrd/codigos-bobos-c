#include<stdio.h>

int main(){
	
	int x[5][5], y[1][5], i, j, a;
	
	for(j=0;j<5;j++){
		for(i=0;i<1;i++){
			y[j][i]=0;
		}
	}
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			printf("matriz x[%d][%d]:",j ,i);
			scanf("%d",&x[j][i]);
		}
	}

	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			y[j][0]+=x[j][i];	
		}
	}
	
	printf("soma dos itens das linhas\n");
	
	for(i=0;i<5;i++){
		printf("|");
		for(j=0;j<1;j++){
			printf("%4d",y[i][j]);
		}
		printf("|\n");
	}
	
}
