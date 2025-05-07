#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	int main(){
	 float temperatura, converted;
	 char unidade, convertedUnidade;
	 	scanf("%f %c", &temperatura, &unidade);
	 	if(unidade=='f'||unidade=='F'){
	 			converted=(temperatura-32.0)/1.8;
	 			convertedUnidade='C';
	 		printf("%.2f (%c)",converted, convertedUnidade);
		 }
		 if(unidade=='c'||unidade=='C'){
		 		converted=(temperatura*1.8)+32.0;
		 		convertedUnidade='F';
		 	printf("%.2f (%c)", converted, convertedUnidade);	
		 }
		 return 0;
	}
