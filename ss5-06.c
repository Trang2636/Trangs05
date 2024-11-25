#include<stdio.h>
int main(){
	
	int n;
	float a,b ; 
	printf ("moi ban nhap vao so thu nhat: ");
	scanf("%f",&a); 
		printf ("moi ban nhap vao so thu hai: ");
	scanf("%f",&b); 
		printf("chon 1 de tinh tong\n ") ;
		printf("chon 2 de tinh hieu \n"); 
		printf("chon 3 de tinh tich\n ") ;
		printf("chon 4 de tinh thuong \n"); 
		printf("chon 5 de thoat\n");
		while (n<5){
	
		printf("chon 1 so tu 1 den 5\n");
		scanf("%d",&n) ; 
		switch(n){
			case 1 : printf ("%f + %f= %f\n",a,b,a+b);
			break;
			case 2 : printf("%f-%f=%f\n",a,b,a-b);
			break;
			case 3: printf ("%f * %f = %f\n",a,b,a*b);
			break;
			case 4 : printf ("%f / %f = %f\n",a,b,a/b);
			break ;
		 
			if (n==5){
				break; 
				
			} 
			
			 
		} 
	
	}
	
	return 0; 
} 
