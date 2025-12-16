#include<stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	if(score <= 100 ){
		if(score >= 0){
			if(score >= 85){
				printf("A\n");
				score = 85 - score;
				printf("A(%d)",score);
				}
			else if(score >= 75){
				printf("B\n");
				score = 85 - score;
				printf("A (%d)",score);
				}
			else if(score >= 68){
				printf("C\n");
				score = 75 - score;
				printf("B(%d)",score);
				}
			else if (score >= 55){
				printf("D\n");
				score = 68-score;
				printf("C(%d)",score);
				}
			else if(score < 55){
				printf("F\n");
				}
		}else{
			printf("Error");
		}
	}else{
		printf("Error");
	}
}
