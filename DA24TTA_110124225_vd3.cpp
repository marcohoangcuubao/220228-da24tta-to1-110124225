#include<stdio.h>	
int main()
{
	int a, b;
	
	//Nhap gia tri a va b	
	printf("Nhap gia tri cua A :");
	scanf("%d", &a);
	printf("Nhap gia tri cua B :");	
	scanf("%d", &b);
		
	if(a > b)
	    printf("So nguyen be hon la B");
	else 
	    printf("So nguyen be hon la A");
	
	return 0;
}
