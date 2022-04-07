#include <stdio.h>

void le_matriz (int mat[3][3]){
		int i,j;
		for(i=0;i<3;i++)
		 for(j=0;j<3;j++){
		 	printf("Matriz [%i][%i]:",i,j);
		 	scanf("%i",&mat[i][j]);
		 }
    }
    
void exibe_matriz (int mat[3][3]){
    	int i,j;
    	for(i=0;i<3;i++){
		printf("|");
		for(j=0;j<3;j++){
			printf("%5d",mat[i][j]);
		}
		printf("|\n");
	}
	}
  
void soma_matriz (int mat1[3][3],int mat2[3][3],int mat3[3][3]){
		int i, j;
		for(i=0;i<3;i++)
		   for(j=0;j<3;j++)
		   mat3[i][j]=mat1[i][j]+mat2[i][j];
	}
  
void multi_matriz(int mat1[3][3],int mat2[3][3],int mat3[3][3]){
	int i, j, a;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(a=0;a<3;a++){
				mat3[i][j]+=mat1[i][a]*mat2[a][j];
			}	
		}
	}
}

void zera_matriz(int mat[3][3]){
	int i, j;
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			mat[j][i]=0;
		}
	}
}

int main(){
	
	int x[3][3], y[3][3], s[3][3], m[3][3];
	
	zera_matriz(m);
	le_matriz(x);
	le_matriz(y);
	soma_matriz(x,y,s);
	multi_matriz(x,y,m);
	printf("\nmatriz 1\n");
	exibe_matriz(x);
	printf("\nmatriz 2\n");
	exibe_matriz(y);
	printf("\nmatriz soma\n");
	exibe_matriz(s);
	printf("\nmatriz multiplicacao\n");
	exibe_matriz(m);
	
}
