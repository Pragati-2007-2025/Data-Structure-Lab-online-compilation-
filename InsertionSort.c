#include <stdio.h>

int main() {
    int arr[10], n;
    int i=1, j, key;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    int k=0;
    while(k<n){
        scanf("%d",&arr[k]);
        k++;
    }

    while(i<n){
        key=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
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
