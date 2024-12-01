#include <stdio.h>

int main(){
    int num[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int index, value;
    printf("nhap vi tri muon sua: ");
    scanf("%d", &index);
    if (index >= 0 && index < n){
        printf("nhap gia tri moi: ");
        scanf("%d", &value);
        num[index] = value;
        printf("mang sau khi sua: ");
        for (int i=0;i<n;i++){
            printf("%d ", num[i]);
        }
        printf("\n");
    } else {
        printf("vi tri khong hop le!!");
    }
    return 0;
}

