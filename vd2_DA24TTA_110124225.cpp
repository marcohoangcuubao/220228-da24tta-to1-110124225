#include<stdio.h>	
int main()	
{
	//Khai bao bien	
	char HoTen[50],lop[30],MSSV[10];
	int namsinh ;
	float diemxettuyen;	
		
	//Nhap du lieu
	printf ("\nNhap MSSV:");	
	fflush(stdin);	
	scanf ("%s",MSSV);	
		
	printf ("\nNhap HoTen:");
	fflush(stdin);	
	gets(HoTen);	
	
	printf ("\nNhap lop:");
	fflush(stdin);	
	scanf ("%s",lop);	
	
	printf ("\nNhap nam sinh:");
	scanf ("%d",&namsinh);
		
	printf ("\nNhap diem xet tuyen:");	
	scanf ("%f",&diemxettuyen);	
		
	//Xuat du lieu
	printf("\n%s, %s, %s, %d, %f", MSSV,HoTen,lop,namsinh,diemxettuyen);	
	return 0;
}
