#include <stdio.h>

int main() {
    int num[100];
    int n;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("nhap phan tu thu %d: ", i);
        scanf("%d", &num[i]);
    }
    int index;
    printf("nhap vi tri muon xoa: ");
    scanf("%d", &index);
    if(index>=0 && index<n){
        for(int i=index;i<n - 1;i++){
            num[i] = num[i + 1];
        }
        n--;
        printf("mang sau khi xoa: ");
        for(int i=0;i<n;i++){
            printf("%d ", num[i]);
        }
    }else{
        printf("Vi tri khong hop le!");
    }
    return 0;
}

