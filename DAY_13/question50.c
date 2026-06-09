#include <stdio.h>

int main() {
    int arr[100],i,n,sum=0;
    float avg;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }

    avg = (float)sum/n;   // Typecasting it to float ensures accurately decimal division

    printf("sum=%d\n", sum);
    printf("average=%.2f\n", avg);

    return 0;
}