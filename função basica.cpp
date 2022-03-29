#include <stdio.h>

int soma (){
	int s, x, y;
	scanf("%d",&x);
	scanf("%d",&y);
	s=x+y;
	return(s);
}

int main(){
	
	int r1, r2;

	r1=soma();
	r2=soma();
	
	printf("r1: %d r2: %d", r1,r2);
}
