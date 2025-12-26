#include<stdio.h>
int main(){
	int h,m,s,nx,n;
	printf("Hour : ");
	scanf("%d",&h);
	printf("Minute : ");
	scanf("%d",&m);
	printf("Second : ");
	scanf("%d",&s);
	printf("Next minute : ");
	scanf("%d",&nx);
	n = nx + m;
	if(n > 60 && n <= 120){
		n = n - 60;
		h = h + 1;
		if(h <= 23){
			printf("Hour : %d\nMinute : %d\nSecond : %d\n",h,n,s);
		}else{
			h = 0;
			printf("Hour : %d\nMinute : %d\nSecond : %d\n",h,n,s);
		}
	}else{
		printf("Hour : %d\nMinute : %d\nSecond : %d\n",h,n,s);
	}
}
