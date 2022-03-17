#include<stdio.h>

int main(){
	
	int x[4][4], i, j, s=0;
	
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
			printf("matriz [%d][%d]:",j ,i);
			scanf("%d",&x[j][i]);
		}
	}
	
	j=3;
	for(i=0;i<4;i++){
		s+=x[i][j];
		j--;
	}
	
	for(i=0;i<4;i++){
		printf("|");
		for(j=0;j<4;j++){
			printf("%4d",x[i][j]);
		}
		printf("|\n");
	}
	
	printf("a soma da reta secundaria eh %d",s);
}
