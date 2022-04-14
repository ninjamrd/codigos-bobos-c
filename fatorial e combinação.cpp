#include <stdio.h>

int fat (int x){
	int i, r=1;
	for(i=2;i<=x;i++){
		r=r*i;
	}
	return(r);
}

int main(){
	
	int n, p, c;
	
	scanf("%d %d", &n, &p);
	c=fat(n)/(fat(p)*fat(n-p));
	printf("%d", c);
}
