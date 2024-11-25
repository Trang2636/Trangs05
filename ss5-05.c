#include<stdio.h>
int main(){
	int i=1 ;
	int j=1;
	int n ; 
	printf("moi nhap vao so nguyen duong : ");
	scanf("%d",&n); 
	for (i=n; i<n+1;i++){
		for (j=1 ;j<10 ;j++){
			printf("%d * %d = %d\n",i,j,i*j); 
		} 
	}
	
	return 0; 
} 
