#include <stdio.h>

int main() {
    float chiSoCu, chiSoMoi, soDien, tienDien = 0;

    printf("Nhap chi so cong to dien cu (dau thang): ");
    scanf("%f", &chiSoCu);
    printf("Nhap chi so cong to dien moi (cuoi thang): ");
    scanf("%f", &chiSoMoi);

    soDien = chiSoMoi - chiSoCu;

    if (soDien < 0) {
        printf("Chi so moi phai lon hon chi so cu!\n");
        return 1;
    }

    if (soDien <= 50)
        tienDien = soDien * 10000;
    else if (soDien <= 100)
        tienDien = 50 * 10000 + (soDien - 50) * 15000;
    else if (soDien <= 150)
        tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    else if (soDien <= 200)
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    else
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;

    printf("So dien tieu thu: %.0f kWh\n", soDien);
    printf("Tien dien phai tra: %.0f VND\n", tienDien);

    return 0;
}

