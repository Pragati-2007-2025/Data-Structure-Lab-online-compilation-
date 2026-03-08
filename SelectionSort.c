#include <stdio.h>

int main() {
    int arr[10], n;
    int i=0, j, min, temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }

    i=0;
    while(i<n-1){
        min=i;
        j=i+1;

        while(j<n){
            if(arr[j]<arr[min]){
                min=j;
            }
            j++;
        }

        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

        i++;
    }

    printf("Sorted array:\n");
    i=0;
    while(i<n){
        printf("%d ",arr[i]);
        i++;
    }

    return 0;
}
