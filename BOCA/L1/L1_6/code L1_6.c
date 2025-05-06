#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	int main(){
		
    float media;
	int nota,notab;
    	scanf("%d %d", &nota,&notab);
    		media=(float)nota/2+(float)notab/2;
    	if(media>=7){
    		printf("%.1f - Aprovado", media);
		}
		if(media<7&&media>=5.0){
			printf("%.1f - De recuperacao", media);
		}
		if(2.0>=media){
			printf("%.1f - Reprovado", media);
		}
		return 0;
	}
