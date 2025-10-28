#include<stdio.h>

int main(){
	int nam_sinh;
	float diem_trung_binh;
	int nam_hien_tai = 2025;
	printf("Nhap nam sinh cua ban: ");
	scanf("%d", &nam_sinh);
	printf("Nhap diem trung binh cua ban: ");
	scanf("%f", &diem_trung_binh);
	
	if(nam_sinh <= 1900 || nam_sinh >= 2025){
		printf("Nam sinh khong hop le.\n");
		return 0;
	}
	if(nam_hien_tai - nam_sinh >= 18){
		printf("Sinh vien da du 18 tuoi.\n");
	}else
	printf("Sinh vien chua du 18 tuoi. \n");
	if(diem_trung_binh < 5.0){
		printf("Xep loai: Yeu.\n");
	}else if(diem_trung_binh < 6.4){
		printf("Xep loai: Trung binh.\n");
	}else if(diem_trung_binh < 7.9){
		printf("Xep loai: Kha.\n");
	}else{
		printf("Xep loai: Gioi.\n");
	}
	
	return 0;
}
