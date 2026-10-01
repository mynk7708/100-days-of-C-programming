//Merge two arrays.
#include <stdio.h>

int main(){
     int n1;
     scanf("%d",&n1);
     int arr[n1];
     for (int i = 0; i < n1; i++)
     {
        scanf("%d",&arr[i]);
     }
     int n2;
     scanf("%d",&n2);
     int ar[n2];
     for (int i = 0; i < n2; i++)
     {
        scanf("%d",&ar[i]);
     }
     int mrg=n1+n2;
     int a[mrg];
     int k=0;
     for (int i = 0; i <n1 ;i++)
     {
      a[k]=arr[i];
      k++;
     }
     for (int i = 0; i <n2; i++)
     {
      a[k]=ar[i];
      k++;
     }for (int i = 0; i < mrg; i++)
     {
      printf("%d ",a[i]);
     }
     
     
    
    return 0;
}
