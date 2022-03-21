#include<stdio.h>

int main(){
	
	int x[3][3], y[3][3], z[3][3], i, j, a;
	
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			z[j][i]=0;
		}
	}
	
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			printf("matriz x[%d][%d]:",j ,i);
			scanf("%d",&x[j][i]);
		}
	}
	
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			printf("matriz y[%d][%d]:",j ,i);
			scanf("%d",&y[j][i]);
		}
	}
	
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			for(a=0;a<3;a++){
				z[j][i]+=x[j][a]*y[a][i];
			}	
		}
	}
	
	printf("matriz x\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			printf("%4d",x[i][j]);
		}
		printf("|\n");
	}
	
	printf("matriz y\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			printf("%4d",y[i][j]);
		}
		printf("|\n");
	}
	
	printf("matriz z\n");
	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			printf("%4d",z[i][j]);
		}
		printf("|\n");
	}
	
}
