#include<stdio.h>

int main(){
	int so_dien, chi_so_moi, chi_so_cu;
	float tien;
	printf("Chi so dien cu: ");
	scanf("%d", &chi_so_cu);
	printf("Chi so dien moi: ");
	scanf("%d", &chi_so_moi);
	if (chi_so_moi < chi_so_cu){
		printf("Chi so moi phai lon hon chi so cu!\n");
		return 0;
	}
	so_dien = chi_so_moi - chi_so_cu;
	if(so_dien < 50)
	tien = so_dien * 10000;
	else if(so_dien < 100)
	tien = so_dien * 15000;
	else if (so_dien < 150)
	tien = so_dien * 20000;
	else if (so_dien < 200)
	tien = so_dien * 25000;
	else
	tien = so_dien * 30000;
	printf("So dien tieu thu: %d\n ", so_dien);
	printf("So tien phai tra: %f VND/kWh\n", tien);
	
	return 0;
}
