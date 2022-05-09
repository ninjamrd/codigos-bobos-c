#include <stdio.h>
#include <string.h>
#include <ctype.h>


main(){
	
	char p[20], r[20], c[26], f[30][30];
	int e=0, w=0, l=0, j, i;
	
	fflush(stdin);
	
	for(j=0;j<30;j++){
		for(i=0;i<30;i++){
			f[j][i]=' ';
		}
	}
	printf("================================");
	for(i=0;i<30;i++){
		printf("||");
		for(j=0;j<30;j++){
			printf("%4c",f [i][j]);
		}
		printf("||\n");
	}
	printf("================================");
}
