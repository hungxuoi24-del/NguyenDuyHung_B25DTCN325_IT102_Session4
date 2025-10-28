#include<stdio.h>

int main(){
	int ngay, thang, nam;
	int hople = 0;
	printf("Nhap ngay: ");
	scanf("%d", &ngay);
	printf("Nhap thang: ");
	scanf("%d", &thang);
	printf("Nhap nam: ");
	scanf("%d", &nam);
	if(thang >= 1 && thang <= 12){
		int ngaymax;
		switch(thang){
			case 1:
			case 3:
			case 5:
			case 7:	
			case 8:
			case 10:
			case 12:
			ngaymax = 31;
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			ngaymax = 30;
			break;
			case 2:
				if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
				ngaymax = 29; 
				else
				ngaymax = 28;
				break;
		}
	if(ngay >= 1 && ngay <= ngaymax)
	hople = 1;	
	}
	if (hople)
	printf("Ngay thang nam hop le.\n");
	else
	printf("Ngay thang nam khong hop le.\n");
	
	return 0;

}
