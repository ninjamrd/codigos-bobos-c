#include <stdio.h>

int pot (int n, int p){
	int r, i;
	r=n;
	for(i=1;i<p;i++){
		r=r*n;
	}
	return(r);
}

int main(){
	
	int n, p;
	
	scanf("%d %d", &n, &p);
	printf("%d",pot(n, p));
	
}
