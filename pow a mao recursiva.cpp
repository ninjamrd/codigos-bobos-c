#include <stdio.h>

int pow(int a, int b){
	if(b==0 ) 
		return 1;
	else return a*pow(a,b-1);
}

int main(){
	int x, y;
	
	scanf("%d %d", &x, &y);
	printf("%d elevado a %d eh %d", x, y, pow(x,y));
	
}
