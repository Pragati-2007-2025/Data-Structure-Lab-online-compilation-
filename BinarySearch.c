#include <stdio.h>

int main() {
    int arr[10], n, key;
    int low=0, high, mid;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter sorted elements:\n");
    int i=0;
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    high=n-1;

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==key){
            printf("Element found at position %d",mid+1);
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(low>high)
        printf("Element not found");

    return 0;
}
