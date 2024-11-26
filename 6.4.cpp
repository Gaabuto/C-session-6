#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c,d;
	printf("moi nhap a: ");
	scanf("%d",&a );
	while (a==0){
		printf("a=0 la dieu kien khong the, moi nhap lai a");
		scanf("%d,&a");
	}
	printf("moi nhap b: ");
	scanf("%d",&b );
	printf("moi nhap c: ");
	scanf("%d",&c );
	d = b*b - 4*a*c;
	if(d >0){
		printf("phuong trinh co 2 nghiem phan biet %.2f va %.2f", (-b+sqrt(d))/2*a, (-b-sqrt(d))/2*a );
	}else if(d == 0){
		printf("phuong trinh co 1 nghiem kep la %.2f",-b/(2*a));
	}else{
		printf("phuong trinh vo nghiem");
	}

	return 0;
}
