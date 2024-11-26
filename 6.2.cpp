#include <stdio.h>

int main(){
	int a,b,c,d,e,le,chan;
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
	chan = 0, le = 0;
	if(a%2!=0){
	le ++;
	}else{
		chan++;
	}
	if(b%2!=0){
	le ++;
	}else{
		chan++;
	}
	if(c%2!=0){
	le ++;
	}else{
		chan++;
	}
	if(d%2!=0){
	le ++;
	}else{
		chan++;
	}
	if(e%2!=0){
	le ++;
	}else{
		chan++;
	}
	printf("co %d so chan va %d so le", chan, le);
	return 0;
}
