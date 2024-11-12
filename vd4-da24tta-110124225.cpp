#include<stdio.h>	
int main()	
{	
    int a = 5, b = 2;	
    char pheptoan;
	do
	{	
	printf("\nNhap vao so nguyen thu nhat: ");	
	scanf("%d", &a);	
		
	printf("\nNhap vao so nguyen thu hai: ");	
	scanf("%d", &b);
	} 	while(a<b);
	printf("\nNhap vao 1 ki tu");	
		fflush(stdin);
	scanf("%c", &pheptoan);		

    switch(pheptoan){	
         case '+':	
         printf("\nKet qua phep toan la: %d", a+b);	break;	
		 	
		 case '-':	
		 printf("\nKet qua phep toan la: %d", a-b);	break;	
		 	
	     case '*':	
	     printf("\nKet qua phep toan la: %d", a*b);	break;	
		 	
	     case '/':	
	     printf("\nKet qua phep toan la: %f",(float)a / b);	 break;		
	return 0;
	}
}
