#include<stdio.h>

int niam (int &r){
	int vet[10], i;
	for(i=0;i<10;i++){
		scanf("%d", &vet[i]);
		if(vet[i]%2==0)r+=vet[i];
	}
	return(vet[10]);
	}


int main(){
	
	int vet[10], r;
	
	vet[10]=niam(r);
	printf("%d eh a soma dos numeros pares", r);
}
