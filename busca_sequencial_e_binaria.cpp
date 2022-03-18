#include <stdio.h>

int main(){

	int x[50], n, i, a, q1=0, q2=0, achou=0, inicio=0, meio, fim=49;

	for(i=0;i<50;i++){
		printf("vetor[%d]", i);
		scanf("%d", &x[i]);
	}
	for(n=49;n>0;n--){
		for(i=0;i<n;i++){
			if(x[i]>x[i+1]){
				a=x[i];
				x[i]=x[i+1];
				x[i+1]=a;
			}
		}
	}

	scanf("%d", &n);
	i=0;

	while((x[i]<=n)&&(i<50)){
		if(x[i]==n)achou=1;
		q1++;
		i++;
	}
	
	if(achou==1){
		meio=49/2;
		achou=0;
	
		while((!achou)&&(inicio<=fim)){
			if(x[meio]==n) achou=1;
			else if(n<x[meio])fim=meio-1;
			else inicio=meio+1;
			meio=(inicio+fim)/2;
			q2++;
		}
	}

	if(achou==1)printf("o valor %d foi encontrado depois de %d no metodo sequencial e %d no binario", n, q1, q2);
	else printf("o valor %d nao esta no vetor", n);

}
