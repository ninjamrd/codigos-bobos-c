#include<stdio.h>

int main(){
	
	int x[4][4], i, s=0, j;
	
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
			printf("matriz [%d][%d]:",j ,i);
			scanf("%d",&x[j][i]);
		}
	}
	
	for(i=0;i<4;i++){
		s+=x[i][i];
	}
	
	for(i=0;i<4;i++){
		printf("|");
		for(j=0;j<4;j++){
			printf("%4d",x[i][j]);
		}
		printf("|\n");
	}
	
	printf("a soma da diagonal principal eh %d",s);
	
}
