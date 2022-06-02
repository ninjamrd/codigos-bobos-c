#include <stdio.h>

void tabu(int n, int m){

	if(m==0){
		return;
	}
	else{
		tabu(n, m-1);
		printf("%d x %d = %d\n",n ,m ,m*n);
	}
}


int main(){
	int n, m=10;
	
	scanf("%d", &n);
	tabu(n, m);
	
}
