#include <stdio.h>

int main() {
    int arr[10], n, key, i=0, found=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    i=0;
    while(i<n){
        if(arr[i]==key){
            found=1;
            break;
        }
        else{
            i++;
        }
    }

    if(found==1)
        printf("Element found at position %d", i+1);
    else
        printf("Element not found");

    return 0;
}
