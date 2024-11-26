#include <stdio.h>

int main(){
	int password;
	printf("moi nhap mat khau co 4 chu so: ");
   scanf("%d",&password);
	while(password!=6197){
		printf("doan sai nhap lai di\n");
		printf("moi nhap mat khau co 4 chu so: ");
	    scanf("%d",&password);
	}

printf("chuc mung ban da doan dung");
	
	return 0;
}
