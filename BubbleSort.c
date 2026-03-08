#include <stdio.h>

int main() {
    int arr[10], n;
    int i=0,j,temp;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }

    i=0;
    while(i<n-1){
        j=0;
        while(j<n-i-1){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j++;
        }
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
