#include <stdio.h>

int main(){
	
	int a,i;
	printf("moi nhap 1 so nguyen bat ky: ");
	scanf("%d",&a); 
	
	printf("cac uoc cua so %d la ", a);
	for (i = 1; i<=a;i++){
		if(i == 1 ){
			printf("%d",i);
			
		}else if(a % i == 0){
		    printf(", %d",i);
	}
}
	
	return 0;
}
