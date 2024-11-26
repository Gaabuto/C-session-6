#include <stdio.h>

int main(){
	int a,b,c,d,e;
	printf("moi nhap so thu nhat: ");
	scanf("%d",&a );
	printf("moi nhap so thu hai: ");
	scanf("%d",&b );
	printf("moi nhap so thu ba: ");
	scanf("%d",&c );
	printf("moi nhap so thu tu: ");
	scanf("%d",&d );
	printf("moi nhap so thu nam: ");
	scanf("%d",&e );
	if(a%2!=0){
		printf("\n%d la so chan nen khong tinh vao tong",a);
	a = 0;
	}
	
	if(b%2!=0){
		printf("\n%d la so chan nen khong tinh vao tong",b);
	b = 0;
	}

	if(c%2!=0){
		printf("\n%d la so chan nen khong tinh vao tong",c);
	    c = 0;
	}
	
	if(d%2!=0){
	printf("\n%d la so chan nen khong tinh vao tong",d);
	d = 0;
	}
	
	if(e%2!=0){
	printf("\n%d la so chan nen khong tinh vao tong",e);
	e = 0;
	}
	
	printf("\ntong cac so la %d", a+b+c+d+e);
	return 0;
}
