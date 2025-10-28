#include<stdio.h>

int main(){
	int n;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);
	if(n > 0){
		printf("So vua nhap la so nguyen duong. \n");
	}
	else if(n < 0){
		printf("So vua nhap la so nguyen am. \n");
	}
	else{
		printf("So vua nhap la so 0.\n");
	}
	
	return 0;
}
