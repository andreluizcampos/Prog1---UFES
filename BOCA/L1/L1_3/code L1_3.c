#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	float X,x,Y,y,h,L,p;
		scanf("%f %f %f %f", &x,&y,&X,&Y);
			L=X-x;
			h=Y-y;
			p=2.0*L + 2.0*h;
		printf("%.2f",p);
return 0;		
}
