#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define pi 3.141592
int main(){
float r,R,A;
	scanf("%f",&R); 
		A=pi*R*R;
		r=sqrt(A/2.0/pi);
	printf("%.2f %.2f",A, r);
return 0;	
}
