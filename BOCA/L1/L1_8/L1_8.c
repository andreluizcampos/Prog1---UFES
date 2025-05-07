#include<stdlib.h>
#include<stdio.h>
#include<math.h>
	int main(){
	char vogal[10]={'a','e','i','o','u','A','E','I','O','U'}, letra;
	int q, evitaloop=0;
		scanf("%c",&letra);
			for(q=0;q<10;q++){
		if(letra==vogal[q]){
			evitaloop=1;}
		}
			if(evitaloop==1){
	    	printf("Vogal");}
			else{
				printf("Nao vogal");}
			 return 0;}
