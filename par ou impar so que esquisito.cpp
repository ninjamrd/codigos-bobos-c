#include<stdio.h>

int niam (int &r){
	int v;
	scanf("%d", &v);
	if(v %2==0)r=1;
	else r=0;
	}


int main(){
	
	int r;
	
	niam(r);
	printf("%d", r);
}
