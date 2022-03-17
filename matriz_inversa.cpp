#include<stdio.h>

int main(){
	
	int x[5][5], y[5][5], i, j;
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			printf("matriz [%d][%d]:",j ,i);
			scanf("%d",&x[j][i]);
		}
	}
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			y[j][i]=x[i][j];
		}
	}
	
	printf("matriz\n");
	
	for(i=0;i<5;i++){
		printf("|");
		for(j=0;j<5;j++){
			printf("%4d",x[i][j]);
		}
		printf("|\n");
	}
	
	printf("matriz inversa\n");
	
	for(i=0;i<5;i++){
		printf("|");
		for(j=0;j<5;j++){
			printf("%4d",y[i][j]);
		}
		printf("|\n");
	}
	
}
