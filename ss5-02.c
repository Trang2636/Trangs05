#include<stdio.h>
int main (){
	int correctAnswer = 9;
	int n ; 
	while(n!=correctAnswer){
		printf("moi nhap vao so nguyen: ");
		scanf("%d",&n);
		if (n== correctAnswer ){
			printf("chuan roi"); 
		} 
	} 
	
	return 0 ; 
} 
