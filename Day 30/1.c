//Count even and odd numbers in an array.
#include <stdio.h>

int main(){
     int n;
     scanf("%d",&n);
     int arr[n];
     for (int i = 0; i < n; i++)
     {
        scanf("%d",&arr[i]);
     }
    int evn=0;
    int odd=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]%2==0){
        evn++;
       }else
       odd++;
    }
    printf("even=%d\n",evn);
     printf("odd=%d",odd);
    return 0;
}
