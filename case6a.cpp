#include<stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	if(score >= 85){
		printf("A");
	}
	else if(score >= 84){
		printf("B");
	}
	else if(score >= 74){
		printf("C");
	}
	else if (score >= 40){
		printf("D");
	}
	else if(score < 40){
		printf("f");
	}
}
