#include<stdio.h>
int main (){
	int firstNum , secondNum, hcf; 
	int i=1 ;
	printf ("moi nhap vao so nguyen t1 : ");
	scanf ("%d",&firstNum);
		printf ("moi nhap vao so nguyen t2 : ");
	scanf ("%d",&secondNum);

   for(i = 1; i <= firstNum || i <= secondNum; i++) {
   if( firstNum%i == 0 && secondNum%i == 0 )
      hcf = i;
   }

   printf("USCLN = %d", hcf);
   
	return 0; 
} 
