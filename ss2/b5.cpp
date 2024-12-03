#include <stdio.h>

int main() {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n]; 
    printf("nhap cac phan tu : \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("so can xoa: ");
    scanf("%d", &k);


    int found = 0;  
    for (i = 0; i < n; i++) {
        if (arr[i] == k) {
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  
            found = 1;
            break; 
        }
    }

    if (found) {

        printf("mang sau khi xoa %d: \n", k);
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf(" %d không có trong mang.\n", k);
    }

    return 0;
}

