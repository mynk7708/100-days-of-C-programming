//Search for an element in an array using linear search.
#include <stdio.h>

int main(){
     int n;
     scanf("%d",&n);
     int search;
     scanf("%d",&search);
     int arr[n];
     for (int i = 0; i < n; i++)
     {
        scanf("%d",&arr[i]);
     }
     int found = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==search){
            printf("Found at index %d\n",i);
            found = 1;
        }
    }
    if (found == 0) {
        printf("Element not found\n");
    }
    return 0;
}
