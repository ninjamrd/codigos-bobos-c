#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	int achou=0 ,x ,c ,i ,q1=0 ,q2=0 ,y[100] ,meio ,fim=99 ,inicio=0, m;

	srand(time(NULL));
	x=(rand()%100)+1;

	while(!achou){
		printf("fala um numero de 1 a 100 ae: \t");
		scanf("%d", &c);
		if(c==x){
			achou=1;
			printf("tu eh pica msm em slc\n");
		}
		else if(c>x)printf("mt alto meu rei\n");
		else printf("mt baixo meu nobre\n");
		q1++;
	}

	for(i=0;i<=99;i++)y[i]=i;
	achou=0;

	printf("digite 1 para sim e 0 para nao\n e digite 0 se seu numero menor e 1 se seu numero eh maior\n");
	meio=(fim+meio)/2;
	while((!achou)&&(inicio<=fim)){
		printf("%d eh o seu chute?", y[meio]);
		scanf("%d", &achou);
		if(!achou){
			printf("seu numero eh maior ou menor?");
			scanf("%d", &m);
			if(m==0)fim=meio-1;
			else inicio=meio+1;
		}
		q2++;
		meio=(fim+inicio)/2;
	}

	if(q1<q2)printf("parabens tu eh mt bom tu acertou com %d tentativas e eu tentei %d vezes", q1, q2);
	else if (q1==q2)printf("eh empatamos ambos com %d tentativas",q1 );
	else printf("tu eh mt ruim irmao slc vc tentou %d vezes e eu consegui com %d tentativas", q1, q2);
	}
