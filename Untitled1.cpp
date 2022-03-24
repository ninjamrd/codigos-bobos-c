#include<stdio.h>

int main(){
	
	int m1[10][10], m2[10][10], ms[10][10], mm[10][10], a, i, j, l1, l2, c1, c2;
	
	do{	printf("\nQuantidade de linhas matriz 1:");
		scanf("%d", &l1);
	}	while(l1<2||l1>10);
	
	do{	printf("\nQuantidade de coluna matriz 1:");
		scanf("%d", &c1);
	}	while(c1<2||c1>10);
	
	for(i=0;i<l1;i++){
		for(j=0;j<c1;j++){
			printf("matriz x[%d][%d]:",i ,j );
			scanf("%d",&m1[i][j]);
		}
	}
	
	do{	printf("\nQuantidade de linhas matriz 2:");
		scanf("%d", &l2);
	}	while(l2<2||l2>10);
	
	do{	printf("\nQuantidade de coluna matriz 2:");
		scanf("%d", &c2);
	}	while(c2<2||c2>10);
	
	for(i=0;i<l2;i++){
		for(j=0;j<c2;j++){
			printf("matriz x[%d][%d]:",i ,j );
			scanf("%d",&m2[i][j]);
		}
	}
	
	if(l1==l2 && c1==c2){
		for(i=0;i<l1;i++){
			for(j=0;j<c1;j++){
				ms[i][j]=m1[i][j]+m2[i][j];
			}
		}
	
		printf("matriz soma\n");
		for(i=0;i<l1;i++){
			printf("|");
			for(j=0;j<c1;j++){
				printf("%4d",ms[i][j]);
			}
		printf("|\n");
		}
	}
	
	else printf("nao eh possivel fazer a soma das matrizes\n");
	
	if(c1==l2){
		for(j=0;j<l1;j++){
			for(i=0;i<c2;i++){
				mm[j][i]=0;
			}
		}
		
		for(i=0;i<l1;i++){
			for(j=0;j<c1;j++){
				for(a=0;a<c1;a++){
					mm[i][j]+=m1[i][a]*m2[a][j];
				}	
			}
		}
	
	printf("matriz multiplicaçao\n");
		for(i=0;i<l1;i++){
			printf("|");
			for(j=0;j<c1;j++){
				printf("%6d",mm[i][j]);
			}
		printf("|\n");
		}
	}
	else printf("nao da para fazer a multiplicaçao das matrizes\n");
}
