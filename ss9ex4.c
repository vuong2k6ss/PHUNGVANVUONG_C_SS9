#include <stdio.h>

int main() {
    int num[100];
    int n = 0;
    int x = 0;
    while (x != 6) {
        printf("MENU\n");
        printf("1. nhap vao mang\n");
        printf("2. hien thi mang\n");
        printf("3. them phan tu\n");
        printf("4. sua phan tu\n");
        printf("5. xoa phan tu\n");
        printf("6. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &x);

        switch(x) {
            case 1:
                printf("nhap so luong phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("nhap phan tu thu %d: ", i);
                    scanf("%d", &num[i]);
                }
                break;
            case 2:
                if(n == 0){
                    printf("Mang rong. Chua co du lieu.\n");
                }else{
                    printf("Mang hien tai: ");
                    for(int i = 0; i < n; i++){
                        printf("%d ", num[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                if(n < 100){
                    int value;
                    printf("nhap gia tri can them: ");
                    scanf("%d", &value);
                    num[n] = value;
                    n++;
                    printf("da them phan tu moi.\n");
                }else{
                    printf("mang da day, khong the them phan tu.\n");
                }
                break;
            case 4:
                {
                    int index, value;
                    printf("nhap vi tri muon sua: ");
                    scanf("%d", &index);
                    if(index >= 0 && index < n) {
                        printf("nhap gia tri moi: ");
                        scanf("%d", &value);
                        num[index] = value;
                        printf("da sua phan tu tai vi tri %d.\n", index);
                    }else{
                        printf("vi tri khong hop le.\n");
                    }
                    break;
                }
            case 5:
                {
                    int index;
                    printf("nhap vi tri muon xoa: ");
                    scanf("%d", &index);
                    if(index >= 0 && index < n){
                        for(int i = index; i < n - 1; i++) {
                            num[i] = num[i + 1];
                        }
                        n--;
                        printf("da xoa phan tu tai vi tri %d.\n", index);
                    }else{
                        printf("vi tri khong hop le.\n");
                    }
                    break;
                }
            case 6:
                printf("thoat chuong trinh.\n");
                break;
            default:
                printf("lua chon khong hop le,chon lai:\n");
        }
    }
    return 0;
}


